#include<iostream>
using namespace std;

void reversearray(int a[], int start , int end)
{
    while(start<end)
    {
        int temp;
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}


void leftrotate(int a[] , int d , int n)
{
    if(d==0)
        return;
    else
    {
    d=d%n;
    reversearray(a , 0 , d-1);
    reversearray(a , d , n-1);
    reversearray(a , 0 , n-1);
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int n , d;
    cout<<"Enter number of elements\n";
    cin>>n;
    int a[n];
    cout<<"Taking n arrays input\n";
    for(int i =0  ; i<n ; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter no. of times u want to rotate\n";
    cin>>d;
    leftrotate(a ,  d ,  n);
    printArray(a , n);
    return 0;
}
