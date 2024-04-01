#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter three numbers"<<endl;
	cin>>a>>b>>c;
    if(a>=b && a>=c )
     	cout<<a<<" "<<"is a greater number"<<endl;
	else
	{
	    if(b>a && b>=c )
		cout<<b<<" "<<"is a greater number"<<endl;
		else
		cout<<c<<" "<<"is a greater number"<<endl;
	}

	return 0;
}
