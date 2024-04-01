#include<iostream>
#include<cmath>
using namespace std;

int power(int,int);

int power(int b,int power)
{
	power=1;
	if(b==0)
	return 0;
	else
	{
		for(int i=1;i<=b;i++)
		{
			power=power*b;
		}
	}
	return power;
}
int main()
{
	int num1,num2,res;
	cout<<"Enter base number\n";
	cin>>num1;
	cout<<"enter the power number\n";
	cin>>num2;
	res = pow(num1,num2);
	cout<<"Result is "<<res<<endl;
	return 0;	
}

