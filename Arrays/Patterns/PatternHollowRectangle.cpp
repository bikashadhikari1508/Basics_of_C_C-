#include<iostream>
using namespace std;

int main()
{
	int row,col;
	cout<<"Hollow Rectangle Pattern\n";
	cout<<"Enter rows and coloumn\n";
	cin>>row>>col;
	for(int i=1 ; i<=row ; i++)      //i for rows
	{
		for(int j=1 ; j<=col ; j++)   //j for columns
		{
			if(i==1 || i==row || j==1 || j==col)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
