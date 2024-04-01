#include<iostream>
using namespace std;

int main()
{
    int i,n,table=1;

    cout<<"Enter any positive number :: ";
    cin>>n;

    cout<<"\nMultiplication Table of a given number [ "<<n<<" ] :: \n";
    for(i=1;i<=10;i++)
    {
        table=n*i;
        cout<<n<<" * "<<i<<" = "<<table<<"\n";
    }

    return 0;
}
