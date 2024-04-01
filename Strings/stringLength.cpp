#include<iostream>
#include<cstring>
using namespace std;

int main()
{
/*	char s[50]="Hello World";
	cout<<"Length\n"<<strlen(s)<<endl;
	int i=0;    // Another method
	while(s[i])
	i++;
	cout<<i<<endl; 
	return 0;
*/
	char s1[50];
	cout<<"Enter your name\n";
	cin.getline(s1,50);
	cout<<"size of ur name is"<<" "<<strlen(s1)<<endl;
	return 0;
}
