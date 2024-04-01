#include <bits/stdc++.h>
using namespace std;

void ShiftZero(int A[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]==0)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                if(A[j]!=0)
                {
                    int temp=A[i];
                    A[i]=A[j];
                    A[j]=temp;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
   
