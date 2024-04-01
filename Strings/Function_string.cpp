#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname)       //fname is parameter
{
  cout << fname << " Adhikari\n";
}

int main() {
  myFunction("Abinash");          //Abinash is argument
  myFunction("Bikash");
  myFunction("Swastik");
  return 0;
}


/*When a parameter is passed to the function, it is called an argument.
 So, from the example above: fname is a parameter, while Abinash , Bikash and Swastik are arguments.  */
