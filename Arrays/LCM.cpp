#include<iostream>
using namespace std;

int getLCM(int a , int b)
{
    int res;
    res = (a>b)?a:b;
    while(true){
    if(res%a==0 && res%b==0)
    return res;
    res++;
    }
}

int getLCMArr(int arr[] , int n)
{
    int lcm = getLCM(arr[0] , arr[1]);
    for(int i=2 ; i<n ; i++)
    {
        lcm = getLCM(lcm , arr[i]);
    }
    return lcm;
}

int main()
{
    int arr[] = { 2,3,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "LCM of array elements: " << getLCMArr(arr, n);
}