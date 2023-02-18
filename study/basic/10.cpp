#include <iostream>

namespace M {
    int x = 42;
    void printX() {
        std::cout << "x = " << x << std::endl;
    }
}

namespace n
{
	int x = 90;
    void printX() {
        std::cout << "x = " << x << std::endl;
    }
}

int main() {
    M::printX();
    n::printX();
    return 0;
}
