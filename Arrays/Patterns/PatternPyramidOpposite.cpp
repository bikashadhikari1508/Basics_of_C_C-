#include<iostream>
using namespace std;

int main()
{
	int i,j;
	cout<<"Pattern Pyramid Opposite\n";
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
	return 0;
}
