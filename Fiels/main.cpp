#include<iostream>
#include<fstream>
#include<string>
using std::cin;
using std::cout;
using std::endl;


//#define WRITE_TO_FILE
#define READ_FROM_FILE

void main()
{
	setlocale(LC_ALL, "");

#ifdef WRITE_TO_FILE

	std::ofstream fout;

	//fout.open("File.txt");

	fout.open("File.txt", std::ios_base::app);
	

	fout << "Hello Files" << endl;

	fout.close();

	system("notepad File.txt");

#endif WRITE_TO_FILE


	std::ifstream fin("File.txt");

	if (fin.is_open())
	{
		while (!fin.eof())
		{
			std::string buffer;
			//fin >> buffer;
			std::getline(fin, buffer);
			cout << buffer << endl;
		}

	}
	else
	{
		std::cerr << "Error: File not found" << endl;
	}

	fin.close();



}