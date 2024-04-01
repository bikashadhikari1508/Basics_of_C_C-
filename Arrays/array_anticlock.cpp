#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int t=a[0];
    for(int i=1;i<5;i++)
    {
        a[i-1]=a[i];
    }
    a[4]=t;
    cout<<"Printing the array in anti-clockwise direction\n";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}