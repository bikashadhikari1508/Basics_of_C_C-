#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[20]="Hello";
	char s2[20]="World";
	char s3[20]="World";
	cout<<strcmp(s1,s2)<<endl;
	cout<<strcmp(s2,s1)<<endl;
	cout<<strcmp(s2,s3)<<endl;
	//if both the string are same it will print 0
	return 0;
}
