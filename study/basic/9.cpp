#include <iostream>
using namespace std;

class C 
{
protected:
    int x;
public:
    C(int arg) : x(arg) 
	{
        cout << "C::C(int)" << endl;
    }

    C& operator=(int arg) 
	{
        cout << "C::operator=(int)" << endl;
        x = arg;
        return *this;
    }
	C& operator<<(int arg) 
	{
        cout << "C::operator<<" << endl;
        cout << arg << endl;
        x = arg;
    }
};

int main(void) 
{
    C obj = 100;
    C a;
    // obj(a);
    //     cout << obj(a) << endl;
	obj.operator<<(a)
    return 0;
}