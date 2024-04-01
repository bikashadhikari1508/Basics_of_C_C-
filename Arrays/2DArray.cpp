#include<iostream>
using namespace std;

int main()
{
	int i,j,arr[10][10],row,col;
	cout<<"Initializing the values of 2D Array\n";
	cout<<"Enter the number of rows and columns\n";
	cin>>row>>col;
	cout<<"Enter the values of row and column\n";
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			cout<<"Index of ("<<i<<","<<j<<")"<<" ";
			cin>>arr[i][j];
		}
	}
	cout<<endl;
	cout<<"Displaying the values of 2D Array\n";
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			cout<<arr[i][j]<<" ";
		}
	}
}
