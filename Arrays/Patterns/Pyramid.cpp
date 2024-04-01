#include<iostream>
using namespace std;

int main()
{
	int i,j,count=0;
	cout<<"Pyramid\n";
	for(i=0 ; i<5 ; i++)      //i for rows
	{
		for(j=0;j<4;j++)
		{
			if(i+j>=3)
			cout<<"* ";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
