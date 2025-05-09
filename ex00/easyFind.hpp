#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
typename T::iterator easyFind(T& container, const int toFind)
{
	return std::find(container.begin(), container.end(), toFind);
}

#endif
