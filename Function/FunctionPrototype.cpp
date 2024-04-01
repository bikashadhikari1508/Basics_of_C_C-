#include<iostream>
using namespace std;

void introduceMe(string name, string city ,int age=0)
{
	cout<<"My name is "<<name<<endl;
	cout<<"I live in "<<city<<endl;
	if(age!=0){
		cout<<"I am "<<age<<" years old."<<endl;	
	}

}
main()
{
	cout<<"Hello World\n"<<endl;
	introduceMe("Bikash", "WB", 22);
	cout<<"\n";
	introduceMe("Shubham", "AP");
}
