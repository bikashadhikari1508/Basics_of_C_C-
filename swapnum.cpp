#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the value of a and b\n";
    cin>>a>>b;
    cout<<"B4 swapping\n";
    cout<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swappping\n";
    cout<<a<<" "<<b<<endl;
    return 0;
}