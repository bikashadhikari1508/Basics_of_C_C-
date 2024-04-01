#include<iostream>
using namespace std;

int main()
{
	int num,i;
	cout<<"Finding factors of a number\n";
	cout<<"Enter Number\t";
	cin>>num;
	cout<<"Factors are given below\n";
    for(i=1 ;i<=num; i++)   //initialization,condition,updation
    {
    	if(num%i == 0 )
		cout<<i<<" ";
	}
	return 0;
}
