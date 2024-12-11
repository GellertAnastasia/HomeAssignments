/* Anastasia Gellert st130144@student.spbu.ru
	assignment 3
*/

#include <iostream>
#include "decepticon.h"
#include "autobot.h"
#include "airbot.h"

std::ostream& operator<<(std::ostream& os, Transformer& transformer) {
	return os << "Трансформер: уровень = " << transformer.GetLevel() << ", сила = " << transformer.GetStrength();
}
bool operator<(Transformer& transformer1, Transformer& transformer2) {
	return transformer1.GetStrength() < transformer2.GetStrength();
}
bool operator>(Transformer& transformer1, Transformer& transformer2) {
	return transformer1.GetStrength() > transformer2.GetStrength();
}
bool operator==(Transformer& transformer1, Transformer& transformer2) {
	return transformer1.GetStrength() == transformer2.GetStrength();
}

int main() {
	
	Transformer transformer1(8,16);
	std::cout << transformer1 << std::endl;
	
	Autobot autobot(8,9);
	std::cout << autobot << std::endl;
	
	Decepticon decepticon(8,9);
	std::cout << decepticon << std::endl;
	
	Airbot airbot(8,9);
	std::cout << airbot << std::endl;
	
	Transformer transformer2(9,11);
	if (transformer1 > transformer2) {
		std::cout<<"transformer1 сильнее transformer2"<<std::endl;
	} else if (transformer1 < transformer2) {
		std::cout<<"transformer1 слабее transformer2"<<std::endl;
	} else if (transformer1 == transformer2) {
		std::cout<<"transformer1 равен по силе с transformer2"<<std::endl;
	}
}