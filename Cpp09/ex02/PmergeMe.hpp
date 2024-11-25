#ifndef PMERGEME_HPP
#define PMERGEME_HPP

class PmergeMe {
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();
		PmergeMe(int argc, char **argv);
};

#endif
