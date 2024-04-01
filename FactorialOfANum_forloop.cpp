#include<iostream>
using namespace std;

int main()
{
	int num,i,fact=1;
	cout<<"Factorial of a Natural Number\n";
	cout<<"Enter Number\t";
	cin>>num;
    for(i=1 ;i<=num; i++)   //initialization,condition,updation
    {
		fact = fact*i;
	}
	cout<<"Factorial of given number is "<<fact<<endl;
	return 0;
}
