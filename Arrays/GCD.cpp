#include<iostream>
using namespace std;

int GCD(int m , int n)
{
    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else
            n=n-m;
    }
    return m;
}

int findGCD(int arr[] ,int b)
{
    int res=arr[0];
    for(int i=1 ; i<b ; i++)
    {
        res = GCD(arr[i] ,res);
        
        if(res == 1)
        {
            return 1;
        }
    }
    return res;
}

int main()
{
    int arr[]={2,4,6,8,16};
    int b = sizeof(arr)/sizeof(arr[0]);
    cout<<"GCD of given array is: "<< findGCD(arr , b) <<endl;
    return 0;
}
