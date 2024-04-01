//Reference variable is an alternating name(alias) given to an existing variable

#include<iostream>
using namespace std;

int main()
{
    int a=100;
    int &b = a;
    int &c = b;
    cout<<"a="<<a<<"\t"<<"b="<<b<<"\t"<<"c="<<c<<endl;
    c=200;
    cout<<"a="<<a<<"\t"<<"b="<<b<<"\t"<<"c="<<c<<endl;
    b=400;
    cout<<"a="<<a<<"\t"<<"b="<<b<<"\t"<<"c="<<c<<endl;
}