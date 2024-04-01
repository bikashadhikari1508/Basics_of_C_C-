#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int m1,m2,m3;
    float sum,avg;
    cout<<"Display Grades\n";
    cout<<"Enter the marks of 3 subjects"<<endl;
    cin>>m1>>m2>>m3;
    sum = (m1+m2+m3);
    avg = sum/3;
    if(avg>=70)
    	cout<<"A Grade"<<endl;
    else if(avg>50 && avg<70)
    	cout<<"B Grade"<<endl;
    else
    	cout<<"C Grade"<<endl;
	return 0;
}

