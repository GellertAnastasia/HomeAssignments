#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

int main()
{
	int i;
	std::ifstream infile;
	infile.open("source.pdf",std::ios::binary|std::ios::in);
	int size = std::filesystem::file_size("source.pdf");
	int *buffer = new int[size];
	infile.read((char *)&buffer,sizeof(buffer));



	std::ofstream outfile;
	outfile.open("temppdf.pdf",std::ios::binary|std::ios::out);
	outfile.write((char *)&buffer,sizeof(buffer));



	infile.close();
	outfile.close();
}
