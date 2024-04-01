#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	float sum=0,sub=0,multi=1;
	a=10; b=5; c=15;
	sum+= a; //sum= sum + a
	sum+= a+b+c; // sum= sum + a + b + c
	sub-= a-b-c;
	multi*= a*b*c;
	sub--; //Decrement operator 
	multi++; //increment operator
	++multi;
	cout<<"sum"<<" "<<++sum<<endl;
	cout<<"sub"<<" "<<sub<<endl;
	cout<<"multiplication"<<" "<<multi<<endl;
	return 0;
}
