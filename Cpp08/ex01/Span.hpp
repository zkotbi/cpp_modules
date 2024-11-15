#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>


class Span {
	private:
		unsigned int		N;
		std::vector<int>	numbers;
	public:
		Span();
		Span(const Span& other);
		Span(unsigned int max);
		Span& operator=(const Span& other);
		~Span();

		void			addNumber(int nb);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			fill(const std::vector<int>& toAdd);
};

#endif
