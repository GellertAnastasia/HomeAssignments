/* Anastasia Gellert st130144@student.spbu.ru
	assignment 2b
*/

#include "calculate.h"
#include <iostream>

int main()
{
    std::string line;
    std::getline(std::cin, line); //считываем строчку

    int* arr = new int[size(line)]; //создаем стек

    calculate(arr, line);

    delete [] arr; //очищаем память

    return 0;
}
