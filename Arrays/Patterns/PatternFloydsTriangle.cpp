#include<iostream>
using namespace std;

int main()
{
	int num,count=1;
	cout<<"Floyds Triangle Pattern\n";
	cout<<"Enter number\n";
	cin>>num;
	for(int i=1 ; i<=num ; i++)      //i for rows
	{
		for(int j=1 ; j<=i ; j++)   //j for columns
		{
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
	return 0;
}
