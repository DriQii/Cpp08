#include "easyFind.hpp"

int main(void) {

	std::vector<int> vec;
	std::vector<int>::iterator it;

	for (int i = 2; i < 20; i += 2)
		vec.emplace_back(i);

	it = easyFind(vec, 8);

	std::cout << *it << std::endl;
	std::cout << *(it + 4) << std::endl;

	it = easyFind(vec, 7);
	if (it != vec.end())
		std::cout << "Element find : " << *it << std::endl;
	else
		std::cout << "Element not find" << std::endl;
	return 0;
}
