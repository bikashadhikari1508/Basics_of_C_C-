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
	cout<<"Adding the values of array\n";
	int sum=0;
	for(i=0 ; i<5 ; i++)
	{
		sum=sum+bar[i];
	}
	cout<<"The result is"<<" "<<sum<<endl;
	return 0;
}
