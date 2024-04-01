#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string str;
	cout<<"Enter a string\n";
	getline(cin,str);
	int i;
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]>='a' && str[i]<='z') //Changing to uppercase
			str[i]=str[i]-32;
		else if(str[i]>='A' && str[i]<='Z')  //Changing to lowercase
			str[i]=str[i]+32;
		else
			cout<<"Wrong input"<<endl;
			break;
	}
	cout<<"Required string after converting the characters into opposite case\n"<<str<<endl;
	return 0;
}
