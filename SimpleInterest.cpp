#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int PrincipalValue,time,rate;
    float SI;
    cout<<"calculation of Simple interest\n";
    cout<<"Enter the principal ammount,time and rate ";
	cin>>PrincipalValue>>time>>rate;
	SI= (PrincipalValue*rate*time)/100;
	cout<<"simple interest= "<<SI<<endl;
	return 0;
}

