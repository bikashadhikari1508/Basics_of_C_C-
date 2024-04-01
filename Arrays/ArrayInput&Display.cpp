#include<iostream>
using namespace std;

int main()
{
	int size,i;
	cout<<"enter size of array\n";
	cin>>size;
	int arr[size];
	for(i=0 ; i<size ; i++)
	cin>>arr[i];
	for(i=0 ; i<size ; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0; 
}
