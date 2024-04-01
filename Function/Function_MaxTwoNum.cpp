#include<iostream>
using namespace std;

int max(int x, int y);   //Declaration of function

int max(int x, int y)     //Defining a function
{
	int z;
	if(x>y)
		z=x;
	else
		z=y;
	return z;
}
int main()
{
	int a,b,c;
	cout<<"Enter two number\n";
	cin>>a>>b;
	c=max(a,b);     //Calling a function
	cout<<"maximum among two number is"<<" "<<c<<endl;
	return 0;
}
