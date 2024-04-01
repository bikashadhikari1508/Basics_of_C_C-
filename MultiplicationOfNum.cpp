#include<iostream>
using namespace std;

int main()
{
	int num,i,res;
	cout<<"Multiplication of a number\n";
	cout<<"Enter Number\t";
	cin>>num;
    for(i=1 ; i<=10 ; i++)   //initialization,condition,updation
    {
    	res = num*i;
		cout<<num<<"*"<<i<<" "<<"="<<" "<<res<<endl;   //Statement
	}
	return 0;
}
