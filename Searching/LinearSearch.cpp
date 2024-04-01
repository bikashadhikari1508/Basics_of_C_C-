#include<iostream>
using namespace std;

int main()
{
	int i,num,a[num];
	cout<<"Linear Search Program\n";
	cout<<"Enter the number of inputs in array\n";
	cin>>num;
	cout<<"Enter values\n";
	for(i=0 ; i<num ; i++)
	{
		cin>>a[i];
	}
	cout<<"Printing the values of array\n";
	for(i=0 ; i<num ; i++)
	{
		cout<<a[i]<<" "<<endl;
	}
	int key;                             //key means location
	cout<<"Enter value which u want two search\n";
	cin>>key;
	for(i=0 ; i<num ; i++)
	{
		if(key==a[i])
		{
			cout<<"LOCATION FOUND\n";
			cout<<"Location is"<<" "<<i<<endl;
			return 0;
		}
	}
	cout<<"The value is not in the array"<<endl;
}
