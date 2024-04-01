#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Number Patterns\n";
	cout<<"Enter number\n";
	cin>>num;
	for(int i=1 ; i<=num ; i++)      //i for rows
	{
		for(int j=1 ; j<=i ; j++)   //j for columns
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
