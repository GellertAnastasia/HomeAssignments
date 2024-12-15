#include <iostream>
#include "class.h"

int main()
{
	Class<int> m(10, 5, {1.0f, 2.0f});
	std::cout<<m.foo()<<std::endl;

	Class<double> n(10.89, 5, {1.0f, 2.0f});
	std::cout<<n.foo()<<std::endl;

	Class1 x;
	Class<Class1> p(x, 5, {1.0f, 2.0f});
	std::cout<<p.foo()<<std::endl;


	return 0;
}
