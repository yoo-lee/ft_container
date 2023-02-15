#include <type_traits>
#include <iostream>
#include <array>
#include <stdexcept>

struct A {
    A(int);
};
struct B {
    B(A) { }
};

int main() {
    B b(1);
    return 0;
}