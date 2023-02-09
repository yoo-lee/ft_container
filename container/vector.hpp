#include <memory>
# include <algorithm>
# include <cstddef>
# include <tgmath.h>
# include "./utils/utils.hpp"
# include "./utils/random_access_iterator.hpp"

namespace ft
{
	template < class T, class Alloc = std::allocator<T> >
	class vector
	{
		public:

		typedef T	value;
		typedef Alloc	allocator_type;
		typedef typename allocator_type::reference	reference;
		typedef typename allocator_type::const_reference	const_reference;
		typedef typename allocator_type::pointer	pointer;
		typedef typename allocator_type::pointer	const_pointer;
		typedef ft::random_access_iterator<value>	iterator;
		typedef ft::reverse_iterator<iterator>		reverse_iterator;
		typedef ft::reverse_iterator<const_iterator>	const_reverse_iterator;
		typedef typename ft::iterator_traits<iterator>::difference_type	difference_type;
		typedef typename allocator_type::size_type	size_type;

			explicit vector (const allocator_type& alloc = allocator_type())
			:
				_alloc(alloc),
				_start(u_nullptr),
				_end(u_nullptr),
				_end_capacity(u_nullptr)
			{}
	};
		// explicit vector (size_type n, const value_type& val = value_type(),
		// const allocator_type& alloc = allocator_type())
		// 	:
		// 		_alloc(alloc),
		// 		_start(u_nullptr),
		// 		_end(u_nullptr),
		// 		_end_capacity(u_nullptr)
		// 	{
		// 		_start = _alloc.allocate( n );
		// 		_end_capacity = _start + n;
		// 		_end = _start;
		// 		while (n--)
		// 		{
		// 			_alloc.construct(_end, val);
		// 			_end++;
		// 		}
		// 	}
			// template <class InputIterator>
			// 		vector (InputIterator first, InputIterator last,
			// 				const allocator_type& alloc = allocator_type(),
			// 				typename ft::enable_if<!ft::is_integral<InputIterator>::value, InputIterator>::type* = u_nullptr)
			// :
			// 	_alloc(alloc)
			// {
			// 	bool is_valid;
			// 	if (!(is_valide = ft::is_ft_iterator_tagged<typename ft::iterator))
			// }

			// vector (const vector& x)
			// :
			// 	_alloc(x._alloc),
			// 	_start(u_nullptr),
			// 	_end(u_nullptr),
			// 	_end_capacity(u_nullptr)
			// 	{
			// 		this -> insert(this -> begin(), x.begin(), x.end());
			// 	}
			// ~vector()
			// {
			// 	this -> clear();
			// 	_alloc.deallocate(_start, this->capacity());
			// }

			// vector &operator=(const vector& x)
			// {
			// 	if (x == *this)
			// 		return (*this);
			// 	this -> clear();
			// 	this -> insert(this -> end(), x.begin(), x.end());
			// 	return (*this);
			// }

			// iterator begin() { return (_start);};
	}
}