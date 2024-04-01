#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a,b,c,d;
	float root1,root2;
	cout<<"Calculation of Quadratic eqn\n";  
	cout<<"Enter the coefficient of a,b and c\n";
	cin>>a>>b>>c;
	d = b*b - 4*a*c;
	if(d > 0)
	{
	    root1 = (-b + sqrt(d))/(2*a);
	    root2 = (-b - sqrt(d))/(2*a);
		cout<<root1<<" "<<root2<<"are real and unequal"<<endl;
	}
	else if(d == 0)  //Relational Operator
	{
		root1 = (-b)/(2*a);
		root2 = (-b)/(2*a);
		cout<<root1<<" "<<root2<<"are real and equal"<<endl;
	}
	else
	{
		root1 = (-b + sqrt(d))/(2*a);
		root2 = (-b - sqrt(d))/(2*a);
		cout<<root1<<" "<<root2<<"are imaginary"<<endl;
	}
	return 0;
}

