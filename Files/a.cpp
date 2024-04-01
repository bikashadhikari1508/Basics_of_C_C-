#include<iostream>
#include<fstream>

using namespace std;

/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream
3. ofstream
*/

/*
in order to work with files in c++, you will have to open it. Primarily there are two ways to open a file
1 Using the constructor
2 Using the member function open() of the class
*/

int main()
{
	string str="Bikash";
	//opening files using constructor
	ofstream out("sample.txt");  //write operation
	out<<str;
}

