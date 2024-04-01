#include<iostream>
using namespace std;

int main()
{
	int i,j,count=0;
	cout<<"Pattern\n";
	for(i=0 ; i<5 ; i++)      //i for rows
	{
		for(j=0 ; j<5 ; j++)   //j for columns
		{
			cout<<"("<<++count<<")"<<",";
		}
		cout<<endl;
	}
	return 0;
}
