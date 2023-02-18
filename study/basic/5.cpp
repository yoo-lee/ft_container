#include <type_traits>
#include <iostream>
#include <array>
#include <stdexcept>

struct A 
{
    A(int);
};

struct B {
    B(A) { }
};

int main() {
    // A a(1);
    B(a);
    return 0;
}