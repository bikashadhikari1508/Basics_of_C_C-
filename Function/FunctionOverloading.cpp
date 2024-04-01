#include<iostream>
using namespace std;

int add(int x,int y)
{
	return x+y;
}
int add(int x,int y, int z)
{
	return x+y+z;
}
float add(float x,float y)
{
	return x+y;
}

int main()
{
	int a=5,b=10,c,d;
	c=add(a,b);
	d=add(a,b,c);
	float i=4.5f , j=5.5f ,k;
	k=add(i,j);
	cout<<"Integer addition of two numbers "<<c<<endl;
	cout<<"Integer addition of three numbers "<<d<<endl;
	cout<<"float addition of two numbers "<<k<<endl;
	return 0;
}
