#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Numbers Pattern\n";
	cout<<"Enter number\n";
	cin>>num;
	for(int i=1 ; i<=num ; i++)      //i for rows
	{
		for(int j=1 ; j<=num+1-i ; j++)   //j for columns
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
