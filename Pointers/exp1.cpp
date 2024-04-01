#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int a;
	a=10;
	int *p;
	p=&a;
	cout<<"a: "<<a<<endl;  //value of a
	cout<<"p: "<<p<<endl;  //stores addresss of a in p
	
	cout<<"&a: "<<&a<<endl; //addresss of a
	cout<<"*p: "<<*p<<endl; //gives the value of a
	cout<<"&p: "<<&p<<endl; //address of p
	cout<<"\n\n";
	
	a=20;
	cout<<"a: "<<a<<endl;  //value of a
	cout<<"p: "<<p<<endl;  //stores addresss of a in p
	
	cout<<"&a: "<<&a<<endl; //addresss of a
	cout<<"*p: "<<*p<<endl; //gives the value of a
	cout<<"&p: "<<&p<<endl; //address of p
	return 0;
}
