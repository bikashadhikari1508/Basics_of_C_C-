#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float NS,BS,POA,POD;  //NetSalary,BasicSalary,PercentageOfAllowance,PercentageOfDeductions
	cout<<"Enter ur basic salary"<<endl;
	cin>>BS;
	cout<<"Enter the amount of POA"<<endl;
	cin>>POA;
	cout<<"Enter the amount of DOA"<<endl;
	cin>>POD;
	NS = BS + (BS * POA/100) - (BS * POD/100);
	cout<<"So the net salary="<<" "<<NS<<endl;
	return 0;
}
