#include<iostream>
using namespace std;

int max(int,int,int);
int max(int a,int b,int c)
{
	if(a>=b && a>=c )
     {
		cout<<a<<" "<<"is a greater number"<<endl;
     	return a;
     }
	else
	{
	    if(b>a && b>=c )
		{
		cout<<b<<" "<<"is a greater number"<<endl;
		return b;}
		else
		cout<<c<<" "<<"is a greater number"<<endl;
		return c;
	}
}
int main()
{
	int a,b,c,result;
	cout<<"Enter three numbers"<<endl;
	cin>>a>>b>>c;
	result=max(a,b,c);
   	return 0;
}
