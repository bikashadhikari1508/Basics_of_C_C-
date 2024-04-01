#include<iostream>
#include<stdlib.h>
using namespace std;

int * fun(int size)
{
    int *p;
    p = new int[size];
    for(int i=0 ; i<size ; i++)
    {
        p[i]=i+1;
    }
    return p;
}

int main()
{
    int *ptr , n=5;
    ptr = fun(n);
    for(int i=0 ; i<n ; i++)
    {
        cout<<ptr[i]<<" ";
    }
}