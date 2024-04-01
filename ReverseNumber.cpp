#include<iostream>
using namespace std;

int main()
{
	int num,rem,rev=0;
	cout<<"Reversing of number\n";
	cout<<"Enter a number\n";
	cin>>num;
	int temp=num;
	while(num>0)
	{
		rem = num%10;
		num = num/10;
		rev = rev*10 + rem;
	}
	num=temp;
	cout<<"the reverse number of "<<num<<" is"<<" "<<rev<<endl;
	return 0;
}
