#include<iostream>
using namespace std;

int x;   //Global variable  //By default x will be taken as 0
int main()
{
	static int x=30; //Static variable //By default it will taken as 0
	cout<<"x= "<<x<<endl;
	cout<<"x= "<<::x<<endl;  //Calling Global variable
	return 0;
}
