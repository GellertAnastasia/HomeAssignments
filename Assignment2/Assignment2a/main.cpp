/* Anastasia Gellert st130144@student.spbu.ru
	assignment 2a
*/

#include "reverse.h"
#include <iostream>
#include <fstream>
#include <filesystem>

int main()
{
	std::ifstream infile;
	infile.open("source",std::ios::binary|std::ios::in); //открываем файл в бинарном виде
	int size = std::filesystem::file_size("source") - 1; //находим размер файла
	char* arr = new char[size]; //создаем динамический массив
	infile.read(arr,size); //считываем файл в массив

	reverse(arr, size); //переворачиваем массив

	std::ofstream outfile;
        outfile.open("temppdf",std::ios::binary|std::ios::out); //открываем\создаем файл вывода
	outfile.write(arr,size); //записываем массив в файл

	delete [] arr; //освобождаем память

	infile.close(); //закрываем файлы
	outfile.close();

	return 0;
}
