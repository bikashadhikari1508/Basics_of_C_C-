#include <iostream>
using namespace std;

void printArray(int a[5])
{
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void sumArray(int a[5])
{
    int i, sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    cout<<"Sum = "<<sum;
}

int main()
{
    cout<<"Array using Functions\n";  
    int a[5]={2,5,6,12,11};
    printArray(a);   //passing array to function    
    sumArray(a);
    return 0;
}
