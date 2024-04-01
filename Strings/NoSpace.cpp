#include <iostream>

using namespace std;

int main()
{
    string str;
    cout<<"Enter ur name\n";
    getline(cin,str);
    int count = 0;
    for (int i = 0; str[i]!='\0'; i++)
    {   if (str[i] != ' ')
        {
            str[count++] = str[i]; 
        }
        else{
            i++;
            str[count++] = toupper(str[i]); 
        }                             
    }
    str[count] = '\0';
    cout<<str<<endl;
    return 0;
}
