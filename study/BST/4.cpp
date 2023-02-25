#include <iterator>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    std::vector<int> v = { 1,2,3,4,5 };

    // 最後の次の要素を指し示すイテレーター
    auto i = std::end(v) ;
	cout << *i << endl;
auto ii = std::begin(v) ;
	cout << *ii << endl;
	auto iij = std::rbegin(v) ;
	cout << *iij << endl;
}