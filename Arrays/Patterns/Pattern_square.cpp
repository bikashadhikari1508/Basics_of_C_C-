#include<iostream>
using namespace std;

int main()
{
	int i,j;
	cout<<"Nested For Loop\n";
	for(i=0 ; i<4 ; i++)      //i for rows
	{
		for(j=0 ; j<4 ; j++)   //j for columns
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
