// #include <stdio.h>
#include <iostream>
 #include <stdio.h>
struct A
{
	int a;
	std::string b;
	A() : a()
	{
		a = -1;
	}
};

using namespace std;
class B
{
	int b;
	
	public:
	B():b()
	{
		cout << b <<  endl;
	}
};

int main()
{	
	A x,y;
	B z;
	x.a =0;
	y.a =10;
	z.b = -11;
	cout << x.a << endl;
	cout << y.a << endl;
}
