#include <iostream>
#include <vector>

namespace ft
{
	template < class T, class Alloc = std::allocator<T> >
	class vector
	{   
		public:
			typedef T                                           value_type;
			typedef Alloc                                       allocator_type;
			typedef typename allocator_type::reference          reference;
			typedef typename allocator_type::const_reference    const_reference;
			typedef typename allocator_type::pointer            pointer;
			typedef typename allocator_type::const_pointer      const_pointer;

			// typedef ft::random_access_iterator<value_type>      iterator;
			// typedef ft::random_access_iterator<const value_type>  const_iterator;
			// typedef ft::reverse_iterator<iterator>             reverse_iterator;
			// typedef ft::reverse_iterator<const_iterator>       const_reverse_iterator;
			
			typedef typename ft::iterator_traits<iterator>::difference_type    difference_type; 
			// iterator_traitsは、イテレータに関する型情報を取得するためのクラス。
			typedef typename allocator_type::size_type          size_type;

void        resize (ft::size_type n, ft::value_type val = value_type())
			{
				if (n > this->max_size())
					throw (std::length_error("vector::resize"));
				else if (n < this->size())
				{
					while (this->size() > n)
					{
						--_end;
						_alloc.destroy(_end);
					}
				}
				else
					this->insert(this->end(), n - this->size(), val);
			}
	};
}
int main()
{
    std::vector<int> vec;

    vec.resize(5, 1); // vecのサイズを5に変更し、初期値を1に設定

    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " "; // 結果：1 1 1 1 1
    }

    vec.resize(3); // vecのサイズを3に変更

    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " "; // 結果：1 1 1
    }

    return 0;
}
