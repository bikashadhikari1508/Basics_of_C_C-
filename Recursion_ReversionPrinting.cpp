#include<iostream>
using namespace std;

void fun(int x)
{ 
	if(x>0)
	{
		cout<<x<<endl;
		fun(x-1);
	}
}
int main()
{
	int num;
	cout<<"enter number\n";
	cin>>num;
	fun(num);
	return 0;
}
