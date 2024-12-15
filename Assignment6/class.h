#ifndef CLASS_H
#define CLASS_H
#include <vector>

template <typename T>
class Class {
private:
	T obj;
	int num;
	std::vector<float> vec;
public:
	Class(T obj);
	bool foo();
};


#endif
