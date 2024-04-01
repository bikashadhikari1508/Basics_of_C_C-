#include<iostream>
using namespace std;

int main()
{
	int num,i;
	cout<<"Dispalying N Natural Numbers\n";
	cout<<"Enter Number\t";
	cin>>num;
	i=1;
	while(i<=num)  //Condition
	{
		cout<<i<<"\n"<<endl;   
		i++;
	}
	return 0;
}
