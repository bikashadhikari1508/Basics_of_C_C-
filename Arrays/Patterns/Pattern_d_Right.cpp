#include<iostream>
using namespace std;

int main()
{
	int i,j, n;
	cout<<"Pattern Right \n";
	cout<<"Enter the number\n";
	cin>>n;
	for(i=1 ; i<=n ; i++)      //i for rows
	{
		for(j=1 ; j<=n ; j++)
		{
			if(j<=n-i)
			{
				cout<<"  ";
			}
			else
			{
				cout<<"* ";
			}
		}
		cout<<endl;
	}
	return 0;
}
