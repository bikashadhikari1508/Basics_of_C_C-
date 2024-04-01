#include<iostream>
using namespace std;

int main()
{
	int i,j;
	cout<<"Diamond Structure Opposite\n";
	for(i=0 ; i<=4 ; i++)      //i for rows
	{
		for(j=0 ; j<=8 ; j++)   //j for columns
		{
			if(j>=4-i && j<=4+i)
			cout<<" ";
			else
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=5 ; i<=8 ; i++)
	{
		for(j=0 ; j<=8 ; j++)
		{
			if(j>=i-4 && j<=12-i)
			cout<<" ";
			else
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
