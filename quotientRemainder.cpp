#include<iostream>
using namespace std;

int main()
{
    int divident,divisor;
    int quotient , remainder;
    cout<<"Enter divident and divisor\n";
    cin>>divident>>divisor;
    quotient =  divident/divisor;
    remainder = divident%divisor;
    cout<<"Quotient = "<<quotient<<endl;
    cout<<"Remainder = "<<remainder<<endl;
    return 0;
}