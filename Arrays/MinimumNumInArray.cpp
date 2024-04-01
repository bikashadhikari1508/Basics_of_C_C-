#include<iostream>
using namespace std;

int main()
{
	int a[5]={10,5,30,20,1};
	int i,min;
	min = a[0];
	cout<<"Finding Minimum Element from array\n";
	for(i=1 ; i<5 ; i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<"the minimum number is"<<" "<<min<<endl;
	return 0;
}
