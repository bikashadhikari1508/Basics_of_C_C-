#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[20]=" ";
	char s2[20]="Morning";
	
	strcpy(s1,s2);
//	strncpy(s1,s2,2);    //3 is the length of source
	cout<<s1<<endl;
	return 0;
}
