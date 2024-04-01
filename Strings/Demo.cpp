#include<iostream>
#include<string>
using namespace std;

int main()
{
    // string str;
    // getline(cin,str);
    // cout<<str<<endl;
    string s1 = "Fam";
    string s2 = "ily";
    s1.append(s2);    //Concatenates two strings by using append function 
    cout<<s1<<endl;
    string s3 = "bdbdkd ndjndb";
    s3.clear();     //Clears the strings 
    if(s3.empty())
    {
        cout<<"String s3 is empty\n";    //is the string empty or not
    }
    cout<<s3<<endl;
    string s4 = "abc";
    string s5 = "xyz";
    cout<<s4.compare(s5)<<endl;    //Compare function
    cout<<s5.compare(s4)<<endl;
    string s6 = "abc";
    cout<<s4.compare(s6)<<endl;
    if(s4.compare(s6) == 0)
    {
        cout<<"Strings s4 and s6 are equal\n";
    }
    return 0;
}