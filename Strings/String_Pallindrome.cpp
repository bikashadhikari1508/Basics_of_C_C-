#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str[20];
	int length,i,flag=0;
	cout<<"Enter the word to check pallindrome\n";
	cin>>str;
	length=strlen(str);
	for(i=0 ; i<length ; i++)
	{
		if(str[i]!=str[length-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	cout<<"the string is  not pallindrome\n"<<endl;
	else
	cout<<"pallindrome\n"<<endl;
	return 0
}
