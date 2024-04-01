#include <iostream>

using namespace std;

int main()
{
    int num,count=0;
    cout<<"Enter any positive integer :: ";
    cin>>num;
    while(num>0)
    {
        num=num/10;
        count++;
    }
    cout<<"\nNumber of Digits in a number [ "<<num<<" ] is :: "<<count<<"\n";
    return 0;
}
