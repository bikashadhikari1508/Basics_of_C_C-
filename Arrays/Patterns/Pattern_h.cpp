#include<iostream>
using namespace std;

int main()
{
	int i,j;
	cout<<"Pattern\n";
	for(i=0 ; i<=4 ; i++)      //i for rows
	{
		for(j=0 ; j<=4 ; j++)   //j for columns
		{
			if(i+j>=5)
			cout<<" ";
			else
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
