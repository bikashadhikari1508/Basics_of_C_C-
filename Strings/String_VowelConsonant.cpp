/*program for count vowels consonant and words  */


#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string str;
	cout<<"Enter your string\n";
	getline(cin,str);
	int space=0,vowel=0,consonant=0;
	for(int i=0 ; str[i]!='\0' ; i++ )
	{
		if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a'
		   || str[i]=='e' ||str[i]=='i' ||str[i]=='o' || str[i]=='u' )
		   vowel++;
		else if(str[i]==' ')
		    space++;
		else
		   consonant++;
	}
	cout<<"No. of vowel is"<<" "<<vowel<<endl;
	cout<<"No. of word is"<<" "<<space+1<<endl;
	cout<<"No. of consonant is"<<" "<<consonant<<endl;
	return 0;
}
