#include<algorithm>   //this header file is used for first one
#include<iostream>
#include<cstring>
using namespace std;
//3 methods shown
/*
int main()
{
	string str="Hello boy";
	reverse(str.begin(),str.end());
	cout<<"\n"<<str<<endl;
	return 0;
}
*/
/*
int main()
{
	char str[]="Hello Boy";
	strrev(str);
	cout<<"\n"<<str;
	return 0;
}
*/

int main()
{
	string str="Hello Boy";
	int i,length;
	length=str.length();
	cout<<"lenghth is "<<length<<endl;
	cout<<"Reversing the string\n";
	for(i=length-1 ; i>=0 ; i--)
	{
		cout<<str[i];
	}
	return 0;
}
