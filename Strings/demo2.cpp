#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "Goosebumps";
    str.erase(1 , 2);  //1 refers to index and 2 refers upto how many characters u want to erase
    cout<<str<<endl;
    return 0;
}