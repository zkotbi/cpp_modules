#include "easyfind.hpp"
#include <cstdlib>
#include <stdexcept>
#include <vector>

int main()
{
	{
		std::vector<int> vec(8);
		std::cout << "the container's elements: " << std::endl;
		for (size_t i = 0; i < 8; i++) {
			vec[i] = rand() % 10;
			std::cout << vec[i] << "  ";
		}
		 std::cout << std::endl;
		try 
		{
			easyfind(vec, 5);
			std::cout << "integer fonded" << std::endl;
		}
		catch (std::runtime_error& e)
		{
			std::cout << e.what() << std::endl;
		}
		try 
		{
			easyfind(vec, 100);
			std::cout << "integer fonded" << std::endl;
		}
		catch (std::runtime_error& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		// std::vector<std::string> vec(8);
		// for (size_t i = 0; vec.size(); i++) {
		// 	vec[i] = "HELLO";
		// }
		// try 
		// {
		// 	easyfind(vec, 100);
		// 	std::cout << "integer fonded" << std::endl;
		// }
		// catch (std::runtime_error& e)
		// {
		// 	std::cout << e.what() << std::endl;
		// }
	}
}
