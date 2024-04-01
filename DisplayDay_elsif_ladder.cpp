#include<iostream>
using namespace std;

int main()
{
	int day;
	cout<<"Enter day number";
	cin>>day;
	if(day == 0) cout<<"Monday"<<endl;
	else if(day == 1)   cout<<"Tuesday"<<endl;
	else if(day == 2)  cout<<"Wednesday"<<endl;
	else if(day == 3)   cout<<"Wed"<<endl;
	else if(day == 4)   cout<<"Thu"<<endl;
	else if(day == 4)   cout<<"Fri"<<endl;
	else if(day == 5)   cout<<"Sat"<<endl;
	else if(day == 6)   cout<<"Sun"<<endl;
	else cout<<"Invalid Number,Please try again!"<<endl;
	return 0;
}
