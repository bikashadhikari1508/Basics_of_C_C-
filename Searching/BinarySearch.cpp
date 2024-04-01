#include<iostream>
using namespace std;

int main()
{
	int i,num,a[num],low=0,high,mid;
	cout<<"Binary Search Program\n";
	cout<<"The number should be in sorted order\n";
	cout<<"Enter the number of inputs in array\n";
	cin>>num;
	high=num-1;
	cout<<"Enter values\n";
	for(i=0 ; i<num ; i++)
	{
		cin>>a[i];
	}
	cout<<"Printing the values of array\n";
	for(i=0 ; i<num ; i++)
	{
		cout<<a[i]<<" ";
	}
	int key;                             //key means location
	cout<<"Enter value which u want two search\t";
	cin>>key;
	while(low<=high)
	{
		mid = (low+high)/2;
		if(key==a[mid])
		{
			cout<<"LOCATION FOUND!\n"<<endl;
			cout<<"The location is"<<" "<<mid<<endl;
			return 0;
		}
		else if(key<a[mid])  high=mid-1;
		else low=mid+1;
	}
	cout<<"The value you searched is not present in the array"<<endl;
	cout<<"Please try again!"<<endl;
}
