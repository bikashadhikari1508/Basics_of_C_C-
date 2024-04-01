#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str1[20]="CAR";
	string str2;
	int length,i,j;
	length=strlen(str1);
	for(i=length-1; i>=0 ; i--)
	{
		str2=str2+str1[i];
	}	
	/*if(flag==1)
	cout<<"the string is  not pallindrome\n"<<endl;
	else
	cout<<"pallindrome\n"<<endl;*/
	cout<<str2;
	if (str1==str2)
	{
		cout<<"\nPalindrome"	;
	}
	else
	{
		cout<<"\nNot palindrome";
	}
}
