#include <iostream>
#include "obj.h"


bool Class1::bar(int num, std::vector<float>&) { 
        return num > 0; 
} 
int Class1::c_1_1() { 
	return 1; 
}
float Class1::c_1_2() { 
	return 1.0f; 
} 
void Class1::c_1_3() { 
	std::cout << "c_1_3" << std::endl; 
}


bool Class2::bar(int, std::vector<float>& vec) { 
        return !vec.empty(); 
} 
int Class2::c_2_1() { 
	return 2; 
} 
float Class2::c_2_2() { 
	return 2.0f; 
} 
void Class2::c_2_3() { 
	std::cout << "c_2_3" << std::endl; 
}


bool Class3::bar(int num, std::vector<float>& vec) { 
        return num == static_cast<int>(vec.size()) * (-1); 
} 
int Class3::c_3_1() { 
	return 3; 
} 
float Class3::c_3_2() { 
	return 3.0f; 
} 
void Class3::c_3_3() { 
	std::cout << "Class3: c_3_3" << std::endl; 
} 





