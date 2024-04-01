#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string str;
	cout<<"Enter a string\n";
	getline(cin,str);
	string::reverse_iterator it;      //Syntax for reverse
	for(it=str.rbegin();it!=str.rend();it++)
	cout<<*it;
	return 0;
}
