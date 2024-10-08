/* Anastasia Gellert st130144@student.spbu.ru
        assignment 2b
*/

#include "calculate.h"
#include <iostream>
#include <sstream>


void calculate(double arr[], std::string line)
{
    std::istringstream iss(line); //из line создаем поток istringstream
    std::string str;
    double *parr = &arr[0]; //создаем указатель на вершину стека

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
    std::cout<<*parr<<std::endl; //выводим конечный результат
}
