#include <iterator>
#include <vector>
#include <iostream>
using namespace std;


int main()
{
   std::vector<int> v = {1, 2, 3, 4, 5};

for (std::size_t i = 0; i != v.size(); ++i) {
    std::cout << v[i] << "\n"s;
}


}