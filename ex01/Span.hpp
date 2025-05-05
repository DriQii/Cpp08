#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

class Span
{
	public :
				Span(unsigned int n);
				/* Span(Span &copy);
				~Span();

		Span	&operator=(Span &rhs); */

		void	addNumber(int nb);

		template<typename T>
		void	addNumbers(T begin, T end)
		{
			if (_size - _vec.size() < static_cast<size_t>(std::distance(begin, end)))
				throw std::out_of_range("Range too short");
			_vec.insert(_vec.end(), begin, end);
		}
		int	shortestSpan() const;
		int	longestSpan() const;
	private :
		Span();
		size_t					_size;
		std::vector<int>		_vec;
};

#endif
