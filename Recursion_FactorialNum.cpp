#include<iostream>
using namespace std;

int fun(int x)
{ 
	if(x>0)
	{
		return x*fun(x-1);
	}
	else 
	    return 1;
}
int main()
{
	int num,res;
	cout<<"enter number for calculating factorial\n";
	cin>>num;
	res=fun(num);
	cout<<"Result is "<<res<<endl;
	return 0;
}
