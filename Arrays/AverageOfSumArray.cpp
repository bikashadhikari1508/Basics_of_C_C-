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
	int sum=0;
	for(i=0 ; i<5 ; i++)
	{
		sum=sum+bar[i];
	}
	int avg= sum/5;
	cout<<"Average is"<<" "<<avg<<endl;
	return 0;
}
