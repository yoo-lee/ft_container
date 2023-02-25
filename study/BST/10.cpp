#include <iterator>
#include <vector>
#include <iostream>
using namespace std;


int main()
{
    std::vector<int> v = {1,2,3,4,5} ;
    auto i = std::begin(v) ;
	++i;
    auto j = std::end(v) ;
    std::cout << v[i] << "\n";
    std::cout << v[j-i] << "\n";
}