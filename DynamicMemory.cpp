#include<iostream>
using namespace std;

int main()
{
	int *p= new int[20];
	
	delete []p;
	p = new int[30];
	return 0;
}
