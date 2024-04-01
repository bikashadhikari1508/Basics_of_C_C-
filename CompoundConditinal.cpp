#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter age of the person"<<endl;
	cin>>age;
    if(age>=20 && age<=50 )
    	cout<<"Young Person"<<endl;
	else
		cout<<"Not a young person"<<endl;
	return 0;
}
