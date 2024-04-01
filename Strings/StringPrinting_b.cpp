#include<iostream>
using namespace std;

int main()
{
/*	char s1[50],s2[50];
	cout<<"enter your name\n";
	cin.get(s1,50);     //read more than one word
	cout<<"Welcome"<<" "<<s1<<endl;
	
	cin.ignore();     
	
	
	cout<<"Enter your name again\n";
	cin.get(s2,50);
	cout<<"Welcome"<<" "<<s2;
	return 0;                          */
	
	char s1[50],s2[50];
	cout<<"enter your name\n";
	cin.getline(s1,50);     //read more than one word
	cout<<"Welcome"<<" "<<s1<<endl;
	
	cout<<"Enter your name again\n";
	cin.getline(s2,50);
	cout<<"Welcome"<<" "<<s2;
	return 0;                    
}
