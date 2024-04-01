#include<iostream>
using namespace std;

int main()
{
	int a=5,b=10,c;
	cout<<"Operation of increament nd decrement operator "<<endl;
	c = a++ * b;    //post increament
	cout<<"a= "<<a<<" "<<"b= "<<b<<" "<<"c= "<<c<<endl;
	c = a * ++b;    //pre increament
	cout<<"a= "<<a<<" "<<"b= "<<b<<" "<<"c= "<<c<<endl;
	c = a * --b;    //pre decreament
	cout<<"a= "<<a<<" "<<"b= "<<b<<" "<<"c= "<<c<<endl;
	c = a-- * b--;   //post decrement
	cout<<"a= "<<a<<" "<<"b= "<<b<<" "<<"c= "<<c<<endl;
	return 0;
}
