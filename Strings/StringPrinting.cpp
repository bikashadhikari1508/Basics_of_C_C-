#include<iostream>
#include<cstring>
using namespace std;

int main()
{
/*	char s[20];
	cout<<"Enter ur name\n";
	cin>>s;
	cout<<s<<endl;    //Only it can first word of sentence     */
	
	
	char s[50];
	cout<<"enter your name\n";
	cin.getline(s,50);     //read more than one word
	cout<<"Welcome"<<" "<<s;
	return 0;
}
