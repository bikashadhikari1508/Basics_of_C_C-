#include<iostream>
using namespace std;

main()
{
	int i, j ,n ;
	cout<<"Enter number of elements\n";
	cin>>n;
	int a[n];
	cout<<"Enter the elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Distinct Elements are\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(a[i]==a[j])
				break;
		}
		if(i==j)
		{
			cout<<a[i]<<" ";
		}
	}
	cout<<"\n";
}
