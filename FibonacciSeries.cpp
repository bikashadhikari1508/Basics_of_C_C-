//WAP to display Fibonacci Series upto nth terms

#include<iostream>
using namespace std;

int main()
{
    int num,i,prev=0,curr=1,next;
    cout<<"Enter number of terms to perform Fibonacci Series\n";
    cin>>num;
    for(i=0 ; i<num ; i++)
    {
        cout<<prev<<" ";
		next = prev + curr;
    	prev = curr;
    	curr = next;
	}
	return 0;
}
