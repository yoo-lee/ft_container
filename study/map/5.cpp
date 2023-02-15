#include <iostream>
#include <map>


namespace ft
{
	template < class Key, class T, class Compare = ft::less<Key>,
				class Alloc = std::allocator<ft::pair<const Key, T> > >
class map
{
	public:
			typedef Key     key_type;
			typedef T       mapped_type;

	mapped_type& operator[] (const key_type& k)
			{
				iterator tmp = this->find(k);

				if (tmp == this->end())
					this->insert(ft::make_pair(k, mapped_type()));
				tmp = this->find(k);
				return ((*tmp).second);
			}
}
};

int main() {
    std::map<int, std::string> myMap;

    myMap[1] = "one";
    myMap[2] = "two";
    myMap[3] = "three";

    std::cout << myMap[1] << std::endl; // Output: "one"
    std::cout << myMap[2] << std::endl; // Output: "two"
    std::cout << myMap[3] << std::endl; // Output: "three"

    return 0;
}