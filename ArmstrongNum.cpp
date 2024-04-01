#include <iostream>
#include<cmath>

using namespace std;

int main()
{   
    int num,temp,sum=0,rem;
    int count=0;
    cout<<"Enter number\n";
    cin>>num;
    //Count the number of digits
    temp=num;
    while(temp!=0)
    {
        temp=temp/10;
        ++count;
    }
    cout<<"Total number of digits= "<<count<<endl;
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+pow(rem,count);
        temp=temp/10;
    }
    if(sum==num)
    {
        cout<<"Armstrong Number\n";
    }
    else
    {
        cout<<"Not an Armstrong Number\n";
    }
    return 0;
}
