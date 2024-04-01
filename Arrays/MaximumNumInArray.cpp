#include<iostream>
using namespace std;

int main()
{
	int a[5]={10,5,30,20,1};
	int i,max;
	max = a[0];
	cout<<"Finding Maximum Element from array\n";
	for(i=1 ; i<5 ; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<"the maximum number is"<<" "<<max<<endl;
	return 0;
}
