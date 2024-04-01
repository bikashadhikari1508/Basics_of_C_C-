#include <bits/stdc++.h>
using namespace std;

void LeftShift(int A[], int n ,int r)
{
    
    int temp,i;
    
    if (r < 0 || r >= n)
    {
        return;
    }
    for(int j=1;j<=r;j++)
    {
        temp=A[0];
        for(i=1;i<n;i++)
        {
            A[i-1]=A[i];
        }
        A[n-1]=temp; 
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    int r;
    int A[] = { 5,10,15,20,25};
    int n = sizeof(A) / sizeof(A[0]);
    cout<<"Enter number of rotations\n";
    cin>>r;
    LeftShift(A,n,r);
    
    return 0;
}
