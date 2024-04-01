#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1 = "Goosebumps";
    string str2 = str1.substr(5 ,4);   //5 is the index pos and 4 is numbers of character u want to print from index position.
    cout<<str1<<endl;
    cout<<str2<<endl;
    return 0;
}