#include "Span.hpp"
#include <cstddef>
#include <cstdlib>
#include <stdexcept>

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }
//

int main()
{
	srand(time(NULL));
	try {	
		Span sp(10000000);
		// Span sp;


		sp.addNumber(444);
		sp.addNumber(-444);
		std::cout << "shortest: " << sp.longestSpan() << std::endl;
		std::cout << "longest: " << sp.shortestSpan() << std::endl;
		std::vector<int> toAdd;
		for (size_t i = 0; i < 9999998; i++) {
			toAdd.push_back(rand());
			if (i / 2)
				toAdd.back() *= -1;
		}
		sp.fill(toAdd);
		std::cout << "shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "longest: " << sp.longestSpan() << std::endl;
		// Span spCopy;
		// spCopy = sp;
		// // Span spCopy(sp);
		// std::cout << "shortest: " << sp.shortestSpan() << std::endl;
		// std::cout << "longest: " << sp.longestSpan() << std::endl;
		// sp.addNumber(444);
	}
	catch (std::runtime_error &e)
	{
		std::cout << "Span: " << e.what() << std::endl;
	}
}
