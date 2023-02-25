#include <vector>
#include <iterator>
using namespace std;
#include <iostream>
int main()
{
    std::vector<int> v = {1,2,3,4,5} ;

	// auto x = std::rbegin(v);
	auto x = std::end(v);
	std::cout << std::addressof(*x) << std::endl;
    // auto x = std::begin(v) ;
    auto y = x ;

    // x, yは0番目の要素を指す

    bool b1 = (x == y) ; // true
	cout << b1 << endl;
    bool b2 = (x != y) ; // false
	cout << b2 << endl;

    ++x ; // xは1番目の要素を指す。

    bool b3 = (x == y) ; // false
	cout << b3 << endl;
    bool b4 = (x != y) ; // true
	cout << b4 << endl;
}
