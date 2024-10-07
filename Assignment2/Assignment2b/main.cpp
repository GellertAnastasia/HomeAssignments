#include <iostream>
#include <string>
#include <sstream>

int main()
{
	std::string line;
	std::getline(std::cin, line);
	std::cout<<line<<std::endl;
	std::istringstream iss(line);


	std::string str;

	int* arr = new int[1000];
	int *parr = &arr[0];
	int i;
	while(iss >> str)
	{
	std::cout<<str<<std::endl;
		if(str == "+") {
			*(parr-1) = *parr + *(parr-1);
			parr -= 1;
		} else if(str == "-") {
                        *(parr-1) = *(parr-1) - *parr;
			parr -= 1;
		} else if(str == "*") {
                        *(parr-1) = *parr * *(parr-1);
			parr -= 1;
		} else if(str == "/") {
                        *(parr-1) = *(parr-1) / *parr;
			parr -= 1;
		} else {
			parr += 1;
			*parr = stoi(str);
			std::cout<<str<<std::endl;
		}
	}
	std::cout<<*parr;
	delete [] arr;

	return 0;
}
