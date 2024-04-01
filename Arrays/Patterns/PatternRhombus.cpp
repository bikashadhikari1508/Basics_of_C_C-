#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Rhombus Pattern\n";
	cout<<"Enter number\n";
	cin>>num;
	for(int i=1 ; i<=num ; i++)      //i for rows
	{
		for(int space=1; space<=num-1; space++)
		{
			cout<<" ";
		}
		for(int j=1 ; j<=num; j++)   //j for columns
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
