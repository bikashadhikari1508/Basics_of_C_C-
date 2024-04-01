#include<iostream>
using namespace std;

int main()
{
	char x = 127;  //MSB is used for signed value;;for +ve it is 0 nd for -ve it is 1
	x++;
	cout<<"x="<<" "<<(int)x<<endl;
	--x;
	cout<<"x="<<" "<<(int)x<<endl;
	return 0;
}
