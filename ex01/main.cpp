#include "Span.hpp"

int	main(void)
{
	try {
	Span sp(10);
	std::vector<int> vec(5, 66);
	sp.addNumber(1);
	sp.addNumber(6);
	sp.addNumber(33);
	sp.addNumber(12);
	sp.addNumber(18);
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	sp.addNumbers(vec.begin(), vec.end());
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
	Span sp(4);
	sp.addNumber(1);
	sp.addNumber(6);
	sp.addNumber(33);
	sp.addNumber(12);
	sp.addNumber(18);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
	Span sp(4);
	std::vector<int> vec(5, 66);
	sp.addNumbers(vec.begin(), vec.end());
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
