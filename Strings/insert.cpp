#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "Goosebumps";
    str.insert(5 , "LOL");    //Insert function // 5 refers the index number and LOL is the inserting word
    cout<<str<<endl;
    cout<<"Size of lenghth is\t"<<str.length()<<endl;
    return 0;
}