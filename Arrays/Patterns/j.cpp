#include<iostream>
using namespace std;

int main()
{
	int i,j,count=0;
	cout<<"Right triangle Pattern\n";
	for(i=0 ; i<5 ; i++)      //i for rows
	{
		for(int k=0;k<i;k++)
		{
			cout<<" ";
		}
	for(int j=4;j>=i;j--)
	{
		cout<<"* ";
	}
	cout<<endl;
	}
	return 0;
}
