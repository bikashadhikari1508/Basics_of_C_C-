#include<iostream>
using namespace std;

int main()
{
	int i,j,count=0;
	cout<<"Diamond\n";
	for(i=0 ; i<5 ; i++)      //i for rows
	{
		for(j=0 ; j<5 ; j++)   //j for columns
		{
			if(i+j>=4)
			cout<<"* ";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	for(i=0 ; i<5 ; i++)      //i for rows
	{
		for(int k=0;k<=i;k++)
		{
			cout<<" ";
		}
//	for(int j=4;j>i;j--)
//	{
//		cout<<"* ";
//	}
//	cout<<endl;
//	}
	return 0;
}
