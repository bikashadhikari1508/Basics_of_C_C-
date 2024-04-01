#include<iostream>
using namespace std;

int main()
{
	int num1,num2,result;
	cout<<"Enter two numbers"<<endl;
	cin>>num1>>num2;
    if(num1 >= num2)
    {
    	result = num1;
    	cout<<"The greater number is"<<" "<<result<<endl;
	}
	else
	{
		result = num2;
		cout<<"The greater number is"<<" "<<result<<endl;
	}
	return 0;
}
