//Write a C++ Program to Convert Days Into Years Weeks and Days

#include <iostream>

using namespace std;

int main()
{
    int days,year,week;
    cout<<"Enter number of days\n";
    cin>>days;
    year=days/365;
    days=days%365;
    week=days/7;
    days=days%7;
    cout<<"No. of year="<<year<<","<<"No. of week="<<week<<","<<"And No. of days="<<days<<endl;
    
    return 0;
}
