#include<iostream>
using namespace std;

int main()
{
	int *ptr,x;     //Declaration of pointer
	ptr = &x;      //Initilization of pointer
	cout<<"Enter number\n";
	cin>>x;
	cout<<"x"<<" "<<x<<endl;
	cout<<"&x"<<" "<<&x<<endl;
	cout<<"ptr"<<" "<<ptr<<endl;
	cout<<"&ptr"<<" "<<&ptr<<endl;
	cout<<"*ptr"<<" "<<*ptr<<endl;  //Dereferencing
	return 0;
}
