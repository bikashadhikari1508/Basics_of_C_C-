#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter 2 number\n";
	cin>>a>>b;
	cout<<"Menu Driven Program\n";
	cout<<"1. Addition\n"<<"2. Subtraction\n"<<"3. Multiplication\n"<<"4. Division\n";
	int option;
	cout<<"Enter Your Choice\n";
	cin>>option;
	switch(option)
	{
		case 1: c=a+b;
		cout<<"Addition is\t"<<c<<endl;//if break statement is not mention then it will go on to next case
		break;
		case 2: c=a-b;
		cout<<"Subtraction is\t"<<c<<endl;
		break;
		case 3: c=a*b;
		cout<<"multiplication is\t"<<c<<endl;
		break;
		case 4: c=a/b;
		cout<<"Division is\t"<<c<<endl;
		break;
		default: cout<<"Invalid	Number!"<<endl;	
	}
	return 0;
}
