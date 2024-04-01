#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[20]="Good";
	char s2[20]="Morning";
	
	strcat(s1,s2);
	strncat(s2,s1,2);    //3 is the length of source
	cout<<s1<<endl;
	cout<<s2<<endl;
	return 0;
}
