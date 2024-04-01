#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n , q ;   //n for rows  nd   q for data pulling out
    cin>>n>>q;
    int arr[10][10];
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        arr[i][0]=k;
        for(int j =1;j<k+1;j++)
        {
            cin>>arr[i][j];
        }
     }
     for(int i=0 ; i<n ; i++)
     {
        int k =arr[i][0];
        for(int j=1;j<k+1;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     for (int i=0;i<q;i++)
     {
        int a,b;
        cin>>a>>b;
        cout<<arr[a][b+1]<<endl;
     }
    return 0;
}