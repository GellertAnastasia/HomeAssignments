#include "class.h"

template <typename T>
Class<T>::Class(T _obj) : obj(_obj) {}

template <typename T>
bool Class<T>::foo() {
	return obj.bar(num, vec);
}



template <>
Class<int>::Class(int _obj) : obj(_obj) {}

template <>
bool Class<int>::foo() {
	return true;
}



template <>
Class<double>::Class(double _obj) : obj(_obj) {}

template <>
bool Class<double>::foo()
{
	return false;
}



