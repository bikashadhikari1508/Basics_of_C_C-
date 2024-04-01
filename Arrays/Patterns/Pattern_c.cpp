#include<iostream>
using namespace std;

int main()
{
	int i,j,count=0;
	cout<<"PYRAMID STRUCTURE\n";
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
	return 0;
}
