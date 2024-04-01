// C,C++ program demonstrate functionality of strncat()
#include <cstring>
#include <iostream>
using namespace std;

int main()
{

// Take any two strings
char src[50] = "efghijkl";
char dest[50]= "abcd";


strncat(dest, src, strlen(src));
	
// Prints the string
cout <<"Source string : "<< src << endl;
cout <<"Destination string : "<< dest;
	
return 0;
}

