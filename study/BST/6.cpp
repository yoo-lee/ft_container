#include <iterator>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    std::vector<int> v = {1,2,3} ;

    // xは最初の要素を指す
    auto x = std::begin(v) ;
	cout << *x << endl;

    // yは最後の次の要素を指す
    auto y = std::end(v) ;
	cout << *y << endl;


    if (x == y) ; // false
	cout << bool(x==y) << endl;
    ++x ; // xは最初の次の要素を指す
    x == y ; // false
	cout << bool(x==y) << endl;
    ++x ; // xは最後の要素を指す
    x == y ; // false
	cout << bool(x==y) << endl;
    ++x ; // xは最後の次の要素を指す
    x == y ; // true
	cout << bool(x==y) << endl;
}