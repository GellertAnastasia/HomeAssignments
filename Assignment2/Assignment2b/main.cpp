/* Anastasia Gellert st130144@student.spbu.ru
	assignment 2b
*/

#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string line;
    std::getline(std::cin, line); //считываем строчку
    std::istringstream iss(line); //из line создаем поток istringstream

    std::string str;
    int* arr = new int[1000]; //создаем стек
    int *parr = &arr[0]; //создаем указатель на вершину стека
    int i;
    while(iss >> str) //читаем из строчки из потока
    {
        if(str == "+") {
            *(parr-1) = *parr + *(parr-1);
            parr -= 1;
        } else if(str == "-") {
            *(parr-1) = *(parr-1) - *parr;
            parr -= 1;
        } else if(str == "*") {
            *(parr-1) = *parr * *(parr-1); //производим бинарные операции и смещаем указатель
            parr -= 1;
        } else if(str == "/") {
            *(parr-1) = *(parr-1) / *parr;
            parr -= 1;
        } else {
            parr += 1; //смещаем указатель
            *parr = stoi(str); //записыываем результат операции в стек
        }
    }
    std::cout<<*parr; //выводим конечный результат
    delete [] arr; //очищаем память

    return 0;
}
