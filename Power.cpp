#include<iostream>
using namespace std;

int main()
{
	int num1,num2,pow=1,res;
	cout<<"Enter the base number\n";
	cin>>num1;
	cout<<"enter the power number\n";
	cin>>num2;
	for(int i=1;i<=num2;i++)
	{
		pow=pow*num1;
	}
	res=pow;
	cout<<"Result is "<<res;
	return 0;
	
}
