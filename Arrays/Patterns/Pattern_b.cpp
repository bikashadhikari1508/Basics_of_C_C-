#include<iostream>
using namespace std;

int main()
{
	int i,j,count=0;
	cout<<"Right triangle Pattern\n";
	for(i=0 ; i<4 ; i++)      //i for rows
	{
		for(j=0 ; j<4 ; j++)   //j for columns
		{
			if(j>=i)
			cout<<"*";
			else if(i>j)
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
