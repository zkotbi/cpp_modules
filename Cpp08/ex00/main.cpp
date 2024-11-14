#include "easyfind.hpp"
#include <cstdlib>
#include <stdexcept>
#include <vector>

int main()
{
	srand(time(NULL));
	std::vector<int>::iterator  it;
	std::vector<int> vec(8);
	std::cout << "the container's(vector) elements: " << std::endl;
	for (size_t i = 0; i < 8; i++) {
		vec[i] = rand() % 10;
		std::cout << vec[i] << "  ";
	}
	std::cout << std::endl;
	int integer = rand() % 8;
	try 
	{
		it = easyfind(vec, integer);
		std::cout << integer << " is founded" << std::endl;
	}
	catch (std::runtime_error& e)
	{
		std::cout << e.what() << ": " << integer << std::endl;
	}
}
