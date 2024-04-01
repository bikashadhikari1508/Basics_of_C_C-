#include<iostream>
using namespace std;

int main()
{
	int m,n,res;
	cout<<"Enter two number\n";
	cin>>m>>n;
	while(m!=n)
	{
		if(m>n)
		{
		 	m=m-n;
	    }
		else
		{
			n=n-m;
		}
	}	
	cout<<"GCD of two number"<<endl;
	cout<<m<<endl;
	return 0;
}
