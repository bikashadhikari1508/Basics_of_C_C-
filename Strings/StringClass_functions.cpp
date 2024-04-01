#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string str="Hello";    //str is object
	str.clear();
/*	cout<<str.length()<<endl;
	string s1;
	cout<<"Enter a sentence\n";
	getline(cin,s1);
	cout<<"length is"<<s1.length()<<endl; // instead of length u can use s1.size()
	cout<<"capacity is"<<s1.capacity()<<endl; //current capacity of string
	s1.resize(50);
	cout<<"Resize capacity"<<s1.capacity()<<endl; 
	cout<<"Maximum size of string"<<s1.max_size()<<endl;   */
	cout<<"clear"<<str<<endl;
	return 0;
}
