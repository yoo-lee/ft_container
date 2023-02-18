# include <cstddef>
# include <limits>
# include <sstream>
# include <typeinfo>
# include <iostream>

class MyClass
{
public:
    int x;
    void func() { }
	MyClass()
};

struct MyStruct
{
    int x;
    void func() { }
};

int main() {
    MyClass c;
    c.x = 1;
    c.func();

    MyStruct s;
    s.x = 2;
    s.func();

    return 0;
}
