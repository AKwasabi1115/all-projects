#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	fstream fileStream;

	fileStream.open("test.txt", ios::out);

	if (fileStream.is_open()) 
	{

	}
}
