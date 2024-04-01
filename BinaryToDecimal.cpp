#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Binarynum;
    cout<<"Enter Binary Num\n";
    cin>>Binarynum;
    int i=0,deci=0,num;
    while(Binarynum > 0)
    {
        num=Binarynum%10;
        deci+=num*pow(2,i);
        Binarynum=Binarynum/10;
        i++;
    }
    cout<<"Decimal number is "<<deci<<endl;
}



//Another method using in built function
//#include <iostream>
//using namespace std;
// 
//int main()
//{
//  string binaryNumber;
//    cin >> binaryNumber;
//    
//    // format stoi(binary_in_string_format, 0, base_value)
//    cout << stoi(binaryNumber, 0, 2);
// 
//    return 0;
//}
