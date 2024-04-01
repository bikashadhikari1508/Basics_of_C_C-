#include <iostream>
#include<cmath>

using namespace std;

int main()
{   
    int num,temp,sum=0,rem;
    int startnum,endnum;
    cout<<"Input starting number of range: ";
    cin>>startnum;
    cout<<"Input ending number of range: ";
    cin>>endnum;
    for(num=startnum;num<=endnum;num++)
    {
    	int count=0;
        //Count the number of digits
        temp=num;
        while(temp!=0)
        {
            temp=temp/10;
            ++count;
        }
        temp=num;
        while(temp!=0)
        {
            rem=temp%10;
            sum=sum+pow(rem,count);
            temp=temp/10;
        }
        if(sum==num)
        {
            cout<<num<<" ";
        }
        sum=0,rem=0;
    }
    return 0;
}
