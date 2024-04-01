#include<iostream>
using namespace std;

int main()
{
	int num,i,sum=0;
	cout<<"Sum of N Natural Number\n";
	cout<<"Enter Number\t";
	cin>>num;
    for(i=1 ; i<=num ; i++)   //initialization,condition,updation
    {
		sum = sum+i;
	}
	cout<<"Sum Of N Natural Number is "<<sum<<endl;
	return 0;
}
