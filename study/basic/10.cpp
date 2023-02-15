#include <iostream>

namespace MyNamespace {
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
    MyNamespace::printX();
    MyNamespace::printX();
    return 0;
}
