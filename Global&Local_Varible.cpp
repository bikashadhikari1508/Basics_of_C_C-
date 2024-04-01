#include<iostream>
using namespace std;
int x=10;      //Global Variable

void fun()
{
	int a=10;     //local variable
	x=x+a;
	cout<<"x= "<<x<<endl;
}
int main()
{
	fun();
	x++;
	cout<<"x= "<<x<<endl;
	return 0;
}
