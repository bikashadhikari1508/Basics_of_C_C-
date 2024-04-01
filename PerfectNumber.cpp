#include<iostream>
using namespace std;

int main()
{
	int num,i,sum=0;
	cout<<"Finding sum of factors of a number\n";
	cout<<"Enter Number\t";
	cin>>num;
    for(i=1 ;i<=num; i++)   //initialization,condition,updation
    {
    	if(num%i == 0) 
		sum = sum+i;
	}
	if(2*num == sum)
	{
		cout<<"Perfect No."<<endl;
	}
	else
	cout<<"Not a perfect number\n"<<endl;	
	return 0;
}
