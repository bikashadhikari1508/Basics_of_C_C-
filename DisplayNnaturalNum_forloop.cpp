#include<iostream>
using namespace std;

int main()
{
	int num,i;
	cout<<"Dispalying N Natural Numbers by using for loop\n";
	cout<<"Enter Number\t";
	cin>>num;
    for(i=1 ; i<=num ; i++)   //initialization,condition,updation
    {
		cout<<i<<" ";    //Statement
	}
	return 0;
}
