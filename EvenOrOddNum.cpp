#include<iostream>
using namespace std;

int main()
{
	int num,result;
	cout<<"Enter a number"<<endl;
	cin>>num;
    if(num%2 == 0 )
    {
    	result = num;
    	cout<<result<<" "<<"is an even number"<<endl;
	}
	else
	{
		result = num;
		cout<<result<<" "<<"is an odd number"<<endl;
	}
	return 0;
}
