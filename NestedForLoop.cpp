#include<iostream>
using namespace std;

int main()
{
	int i,j;
	cout<<"Nested For Loop\n";
	for(i=0 ; i<3 ; i++)      //i for rows
	{
		for(j=0 ; j<3 ; j++)   //j for columns
		{
			cout<<"("<<i<<","<<j<<")";
		}
		cout<<endl;
	}
	return 0;
}
