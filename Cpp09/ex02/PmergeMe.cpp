#include "PmergeMe.hpp"
#include <sys/time.h>
#include <algorithm>
#include <climits>
#include <cstddef>
#include <ctime>
#include <deque>
#include <iostream>
#include <sstream>
#include <sys/_types/_timeval.h>
#include <utility>
#include <vector>

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& ){}

PmergeMe& PmergeMe::operator=(const PmergeMe& ) {return *this;}

PmergeMe::~PmergeMe() {}

static void parseArg(char **argv)
{
	int i = 0;
	long long tmp;
	while (argv[i])
	{
		std::stringstream ss(argv[i]);
		ss >> tmp;
		if (!ss.eof() || tmp < 0 || tmp > INT_MAX)
			throw "Error";
		i++;
	}
}

static size_t binarySearchDeq(std::deque<int> vec, int value)
{
    int left = 0;
    int right = vec.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (vec[mid] == value) {
            return mid;
        }
        else if (vec[mid] > value) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return left;
}
static size_t binarySearchVec(std::vector<int> vec, int value)
{
    int left = 0;
    int right = vec.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (vec[mid] == value) {
            return mid;
        }
        else if (vec[mid] > value) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return left;
}

static void binaryInsertionDeq(std::deque<int>& smaller, std::deque<int>& larger)
{
	for (size_t i = 0; i < smaller.size();i++)
	{
		size_t pos = binarySearchDeq(larger, smaller[i]);
		if (smaller[i] <  larger[pos])
			larger.insert(larger.begin() + pos, smaller[i]);
		else if (smaller[i] >  larger[pos] && pos == larger.size() -1)
			larger.push_back(smaller[i]);
		else if (smaller[i] >=  larger[pos]) 
			larger.insert(larger.begin() + pos + 1, smaller[i]);
	}
}

static void binaryInsertionVec(std::vector<int>& smaller, std::vector<int>& larger)
{
	for (size_t i = 0; i < smaller.size();i++)
	{
		size_t pos = binarySearchVec(larger, smaller[i]);
		if (smaller[i] <  larger[pos])
			larger.insert(larger.begin() + pos, smaller[i]);
		else if (smaller[i] >  larger[pos] && pos == larger.size() -1)
			larger.push_back(smaller[i]);
		else if (smaller[i] >=  larger[pos]) 
			larger.insert(larger.begin() + pos + 1, smaller[i]);
	}
}

static void mergeInsertDeq(std::deque<int>& cont)
{
	std::deque<int> smaller;
	std::deque<int> larger;


	if (cont.size() <= 2)
	{
		if (cont.size() == 2 && cont[0] > cont[1])
			std::swap(cont[0], cont[1]);
		return ;
	}
	for (size_t i = 0; i < cont.size(); i += 2)
	{
		if (i == cont.size() -1)
		{
			larger.push_back(cont[i]);
			break;
		}
		larger.push_back(std::max(cont[i], cont[i + 1]));
		smaller.push_back(std::min(cont[i], cont[i + 1]));
	}
	mergeInsertDeq(larger);
	binaryInsertionDeq(smaller, larger);
	cont = larger;
}

static void mergeInsertVec(std::vector<int>& cont)
{
	std::vector<int> smaller;
	std::vector<int> larger;


	if (cont.size() <= 2)
	{
		if (cont.size() == 2 && cont[0] > cont[1])
			std::swap(cont[0], cont[1]);
		return ;
	}
	for (size_t i = 0; i < cont.size(); i += 2)
	{
		if (i == cont.size() -1)
		{
			larger.push_back(cont[i]);
			break;
		}
		larger.push_back(std::max(cont[i], cont[i + 1]));
		smaller.push_back(std::min(cont[i], cont[i + 1]));
	}
	mergeInsertVec(larger);
	binaryInsertionVec(smaller, larger);
	cont = larger;
}

static void sortDeq(size_t count, char **argv, std::deque<int>& result)
{
	result.resize(count -1);

	for (size_t i = 0; i < count -1;i++)
	{
		std::stringstream ss(argv[i]);
		ss >> result[i];
	}
	mergeInsertDeq(result);
}

static void sortVec(size_t count, char **argv, std::vector<int>& result)
{
	result.resize(count -1);

	for (size_t i = 0; i < count -1;i++)
	{
		std::stringstream ss(argv[i]);
		ss >> result[i];
	}
	mergeInsertVec(result);
}

static size_t getTimeInMs()
{
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return(tv.tv_sec * 1000000 + tv.tv_usec);
}

PmergeMe::PmergeMe(int argc, char **argv)
{
	std::vector<int> vec;
	std::deque<int> deq;
	double			vecTime;
	double			deqTime;
	parseArg(argv);

	deqTime = getTimeInMs();
	sortDeq(argc, argv, deq);
	deqTime = getTimeInMs() - deqTime;

	vecTime = getTimeInMs();
	sortVec(argc, argv, vec);
	vecTime = getTimeInMs() - vecTime;

	std::cout << "Before: ";
	int j = 0;
	while (argv[j] != NULL)
	{
		std::cout << argv[j] << " ";
		j++;
	}
	std::cout << std::endl;
	std::cout << "After: ";
	for (size_t i = 0; i < vec.size();i++)
		std::cout << vec[i] << " ";	
	std::cout << std::endl;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << vecTime << " us" << std::endl;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : " << deqTime << " us" << std::endl;
}

