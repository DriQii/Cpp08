#include "Span.hpp"

Span::Span(unsigned int n) : _size(n)
{
	_vec.reserve(_size);
}
/* Span::Span(Span &copy)
{

}
Span::~Span()
{

}
Span &Span::operator=(Span &rhs)
{

} */

void	Span::addNumber(int nb)
{
	if (_vec.size() == _size)
		throw std::out_of_range("Span is full");
	else
		_vec.emplace_back(nb);
}


int	Span::shortestSpan() const
{
	int	shortSpan = INT_MAX;
	std::vector<int> vecCopy(_vec);
	if(vecCopy.size() < 2)
		throw std::logic_error("Not enough elements to find a span.");
	std::sort(vecCopy.begin(), vecCopy.end());
	for (std::vector<int>::const_iterator it = vecCopy.begin(); it + 1 != vecCopy.end(); it++)
	{
		if(*(it + 1) - *it < shortSpan)
			shortSpan = *(it + 1) - *it;
	}
	return (shortSpan);
}

int	Span::longestSpan() const
{
	if(_vec.size() < 2)
		throw std::logic_error("Not enough elements to find a span.");
	std::pair<std::vector<int>::const_iterator, std::vector<int>::const_iterator> result = std::minmax_element(_vec.begin(), _vec.end());
	return (*result.second - *result.first);
}
