#include<iostream>
using namespace std;

int main()
{
	int x,y,z1,z2,z3,z4,z5;
	cout<<"Bitwise operator"<<endl;
	cout<<"Take two inputs"<<endl;
	cin>>x>>y;
	z1 = x & y;
	z2 = x | y;
	z3 = x ^ y;
	z4 = x << 1;
	z5 = x >> 1;
	cout<<"And operation"<<" "<<z1<<endl;
	cout<<"Or operation"<<" "<<z2<<endl;
	cout<<"Xor operation"<<" "<<z3<<endl;
	cout<<"Left adjacent"<<" "<<z4<<endl;
	cout<<"Right adjacent"<<" "<<z5<<endl;
	return 0;
}
