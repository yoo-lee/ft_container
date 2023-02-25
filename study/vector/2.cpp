#include <iostream>
#include <string>
#include <fstream>
#include <vector>

template <class T>
class Hoge {
public:
    Hoge(std::string&, int);       //  コンストラクタ
};

template <class T>
Hoge<T>::Hoge(std::string& str, int i) {}

int main() {
    std::vector<Hoge<int>> v;
    v.emplace_back("abc", 123);
    return 0;
}
