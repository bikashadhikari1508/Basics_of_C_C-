#include<iostream>
using namespace std;

int main()
{
	int num,i=1;
	cout<<"Dispalying N Natural Numbers\n";
	cout<<"Enter Number\t";
	cin>>num;
    do
	{
		cout<<i<<"\n"<<endl;   //Statement
		i++;
	}
	while(i<=num);    //condition
	return 0;
}
