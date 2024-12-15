#include <iostream>
#include "class.h"

int main()
{
	Class<int> m(10);
	std::cout<<m.foo()<<std::endl;

	Class<double> n(10.89);
	std::cout<<n.foo()<<std::endl;


	return 0;
}
