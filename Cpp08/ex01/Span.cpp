#include "Span.hpp"
#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <stdexcept>


Span::Span()
{
	this->N = 0;
}

Span::Span(const Span& other) : N(other.N), numbers(other.numbers) {
}

Span::Span(unsigned int max) : N(max) {
}

Span& Span::operator=(const Span& other)
{
	this->N = other.N;
	this->numbers = other.numbers;
	return (*this);
}
 
Span::~Span() {
}

void			Span::addNumber(int nb)
{
	if (this->numbers.size() >= N)
		throw std::runtime_error("the Span is full");
	numbers.push_back(nb);
}

unsigned int	Span::shortestSpan()
{
	if (this->numbers.size() < 2)
		throw std::runtime_error("Insufficient Span size");
	std::sort(numbers.begin(), numbers.end());
	int shortest = std::abs(numbers[1] - numbers[0]);
	for (size_t i = 1; i < numbers.size();i++)
	{
		if (std::abs(numbers[i] - numbers[i - 1]) < shortest)
			shortest = std::abs(numbers[i] - numbers[i - 1]);
	}
	return (shortest);
}

unsigned int	Span::longestSpan()
{
	if (this->numbers.size() < 2)
		throw std::runtime_error("Insufficient Span size");
	std::sort(numbers.begin(), numbers.end());
	return (std::abs(numbers.back() - numbers.front()));
}

void			Span::fill(const std::vector<int>& toAdd)
{
	if (toAdd.size() + this->numbers.size() > N)
		throw std::runtime_error("Can't fill the span");
	this->numbers.insert(numbers.end(), toAdd.begin(), toAdd.end());
}
