#include <iterator>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	std::vector<int> v = {1, 2, 3, 4, 5};
	for (auto i = v.begin(), last = v.end() ; i !=last ; ++i)
        std::cout << *i << "\n" ;
}



// {
//     std::vector<int> v = {1,2,3,4,5} ;

//     for ( auto iter = std::begin(v), last = std::end(v) ;
//           iter != last ; ++iter )
//     {
//         std::cout << *iter << "\n"s ;
//     }
// }