#include<iostream>
using namespace std;

int main()
{
	int i,bar[5];
	cout<<"Enter inputs of array\n";
	for(i=0 ; i<5 ; i++)
	{
		cin>>bar[i];
	}
	cout<<"Printing the values of array\n";
	for(i=0 ; i<5 ; i++)
	{
		cout<<bar[i]<<endl;
	}
	return 0;
}
