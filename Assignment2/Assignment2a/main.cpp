#include "reverse.h"
#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

int main()
{
	std::ifstream infile;
	infile.open("source",std::ios::binary|std::ios::in);

	int size = std::filesystem::file_size("source");
	int i;
	char buffer;
	int *arr = new int[size];
        for(i = 0; i < size; i++)
	{
		infile.read((char *)&buffer,sizeof(buffer));
		arr[i] = buffer;
		std::cout<<arr[i]<<" ";
	}
	std::cout<<""<<std::endl;
//	for(i = 0; i < size/2; i++)
//        {
//		buffer = arr[i];
//                arr[i] = arr[size - i - 1];
//                arr[size - i - 1] = buffer;

//	}

	reverse(arr, size, buffer);
	std::cout<<""<<std::endl;
	std::cout<<""<<std::endl;

	std::ofstream outfile;
        outfile.open("temppdf",std::ios::binary|std::ios::out);

	for(i = 0; i < size; i++)
        {
		buffer = arr[i];
                outfile.write((char *)&buffer,sizeof(buffer));
                std::cout<<arr[i]<<" ";
        }
	std::cout<<""<<std::endl;


	delete [] arr;

	infile.close();
	outfile.close();

	return 0;
}
