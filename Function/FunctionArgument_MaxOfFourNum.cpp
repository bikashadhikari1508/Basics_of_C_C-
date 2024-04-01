#include<iostream>
using namespace std;
  
// A function with default arguments, it can be called with 
// 2 arguments or 3 arguments or 4 arguments.
int max(int x, int y, int z=0, int w=0)    //Default values is given from right to left
{
    if(x>y && x>z && x>w)
    return x;
    else if(y>z && y>w)
    return y;
    else if(z>w)
    return z;
    else
    return w;
}
  
/* Driver program to test above function*/
int main()
{
    cout << max(10, 15) << endl;
    cout << max(10, 15, 25) << endl;
    cout << max(10, 15, 5, 20) << endl;
    return 0;
}
