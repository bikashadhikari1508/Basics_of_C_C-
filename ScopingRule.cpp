#include<iostream>
using namespace std;

int x=100;   //Global variable
int main()
{
	int x=20;
	{
		int x=40;
		cout<<"x = "<<x<<endl;  //Takes the nearest value of x
	}
	cout<<"x = "<<x<<endl;
	cout<<"x = "<<::x<<endl;   //Accessing global variable scoping operator is used
	return 0;
}
