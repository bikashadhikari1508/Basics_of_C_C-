#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Triangle Pattern\n";
	cout<<"Enter number\n";
	cin>>num;
	for(int i=1 ; i<=num ; i++)      //i for rows
	{
		for(int j=1 ; j<=num ; j++)   //j for columns
		{
			if(j<=num-i)
			{
				cout<<" ";
			}
			else
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	return 0;
}
