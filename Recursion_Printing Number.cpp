#include<iostream>
using namespace std;

void fun(int x)
{
	if(x>0)
	{
		fun(x-1);
		cout<<x<<endl;
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
