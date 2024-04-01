#include<iostream>
using namespace std;

int main()
{
	int num,rem,rev=0;
	cout<<"Whether the number is pallindrome or not\n";
	cout<<"Enter a number\n";
	cin>>num;
	int temp=num;
	while(num>0)
	{
		rem = num%10;
		rev = (rev*10) + rem;
		num = num/10;
	}
	num=temp;
	if(rev == num)
	cout<<"Pallindrome"<<endl;
	else
	cout<<"Not Pallindrome"<<endl;
	return 0;
}
