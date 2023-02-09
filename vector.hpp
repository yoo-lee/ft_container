
#include <memory>
namespace ft
{
	template < class T, class Alloc = std::allocator<T>>
	class vector
	{
		public:

		typedef T	value;
		typedef Alloc	alocator_type;
		typedef typename alocator_type::reference	reference;
		typedef typename alocator_type::const_reference	const_reference;
		typedef typename alocator_type::pointer	pointer;
		typedef typename alocator_type::pointer	const_pointer;
		typedef ft::random_access_iterator<value>	iterator;



	}
}