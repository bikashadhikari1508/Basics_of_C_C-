#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int t=a[4];
    for(int i=3;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=t;
    cout<<"Printing the array in clockwise direction\n";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}