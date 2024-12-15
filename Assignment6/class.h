#ifndef CLASS_H
#define CLASS_H
#include <vector>
#include "obj.h"

template <typename T>
class Class {
private:
	T obj;
	int num;
	std::vector<float> vec;
public:
	Class(T _obj, int _num, std::vector<float> _vec) : obj(_obj), num(_num), vec(_vec) {};
	bool foo(){
		return obj.bar(num, vec);
	};
};

template <>
class Class<int> {
private:
	int obj;
	int num;
	std::vector<float> vec;
public:
	Class(int _obj, int _num, std::vector<float> _vec) : obj(_obj), num(_num), vec(_vec) {};
	bool foo(){
		return true;
	};
};

template <>
class Class<double> {
private:
	double obj;
	int num;
	std::vector<float> vec;
public:
	Class(double _obj, int _num, std::vector<float> _vec) : obj(_obj), num(_num), vec(_vec) {};
	bool foo(){
		return false;
	};
};

#endif
