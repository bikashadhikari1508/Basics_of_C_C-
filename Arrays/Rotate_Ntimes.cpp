
#include <iostream>

using namespace std;



void rotate(int a[] , int d , int n)
{
   
    for (int i=0;i<d;i++)
    {
        int temp=a[0];
        for(int j =0;j<n;j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=temp;
        
    }
    
    
    for(int i = 0 ; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    
    int n,d;
    cout<<"Enter size\n";
    cin>>n;
    int a[n];
    int i;
    for(i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    cout<<"Eneter d times for rotating";
    cin>>d;
    rotate(a, d, n);
    return 0;
}