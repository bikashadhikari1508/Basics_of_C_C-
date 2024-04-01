#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n,i,j,cnt;
    cin>>n;
    int a[n];
    for(i=0;i<=n;i++)
        cin>>a[i];
    
    for(i=0;i<n;i++)
    {
        cnt=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    cnt++;
                }
            }
        }
        if(cnt==0)
            cout<<a[i]<<" ";
    }
}
