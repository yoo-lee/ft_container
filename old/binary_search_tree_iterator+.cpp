#ifndef BINARY_SEARCH_TREE_ITERATOR_HPP
# define BINARY_SEARCH_TREE_ITERATOR_HPP

//二分探索木のノードを反復処理するためのイテレータークラス
namespace ft
{
	template <typename T, class Compare >
	class BST_iterator : ft::iterator<ft::bidirectional_iterator_tag, T>
	{
		public :

			typedef typename T::value_type    value_type;

			typedef typename ft::iterator<ft::bidirectional_iterator_tag, value_type>::iterator_category iterator_category;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, value_type>::difference_type   difference_type;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, value_type>::pointer   pointer;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, value_type>::reference reference;
			BST_iterator(const Compare& comp = Compare())
			:
				_node(),
				_last_node(),
				_comp(comp)
			{}
			BST_iterator(T * node_p, T * last_node,
						const Compare& comp = Compare())
			:
				_node(node_p),
				_last_node(last_node),
				_comp(comp)
			{}

			BST_iterator(const BST_iterator& bst_it)
			:
				_node(bst_it._node),
				_last_node(bst_it._last_node),
				_comp()
			{}

			// Added for subject
			virtual ~BST_iterator() { }

			
			BST_iterator &operator=(const BST_iterator& bst_it)
			{
				if (*this == bst_it)
					return (*this);
				this->_node = bst_it._node;
				this->_last_node = bst_it._last_node;
				this->_comp = bst_it._comp;
				return (*this);
			}

			bool operator==(const BST_iterator& bst_it)
			{ return (this->_node == bst_it._node); }


			bool operator!=(const BST_iterator& bst_it)
			{ return (this->_node != bst_it._node); }


			reference operator*() const
			{ return (this->_node->value); }

			pointer operator->() const
			{ return (&this->_node->value); }

			BST_iterator& operator++(void)
			{
				T* cursor = _node;

				if (_node->right == _last_node)
				{
					cursor = _node->parent;
					while (cursor != _last_node
						&& _comp(cursor->value.first, _node->value.first))
						cursor = cursor->parent;
					_node = cursor;
				}
				else if (cursor == _last_node)
					_node = _last_node->right;
				else
				{
					cursor = _node->right;
					if (cursor == _last_node->parent
						&& cursor->right == _last_node)
						_node = cursor;
					else
					{
						while (cursor->left != _last_node)
							cursor = cursor->left;
					}
					_node = cursor;
				}
				return (*this);
			}

			BST_iterator operator++(int)
			{
				BST_iterator tmp(*this);
				operator++();
				return (tmp);
			}

			BST_iterator& operator--(void)
			{
				T* cursor = _node;

				if (_node->left == _last_node)
				{
					cursor = _node->parent;
					while (cursor != _last_node
						&& !_comp(cursor->value.first, _node->value.first))
						cursor = cursor->parent;
					_node = cursor;
				}
				else if (cursor == _last_node)
					_node = _last_node->right;
				else
				{
					cursor = _node->left;
					if (cursor == _last_node->parent
						&& cursor->left == _last_node)
						_node = cursor;
					else
					{
						while (cursor->right != _last_node)
							cursor = cursor->right;
					}
					_node = cursor;
				}
				return (*this);
			}

			BST_iterator operator--(int)
			{
				BST_iterator tmp(*this);
				operator--();
				return (tmp);
			}            

			T *			_node;
			T *			_last_node;
			Compare     _comp;
	};

	template <typename T, class Compare >
	class BST_const_iterator : ft::iterator<ft::bidirectional_iterator_tag, T>
	{
		public :

			typedef typename T::value_type    value_type;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, value_type>::iterator_category iterator_category;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, value_type>::difference_type   difference_type;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, value_type>::pointer   pointer;
			typedef typename ft::iterator<ft::bidirectional_iterator_tag, value_type>::reference reference;
			BST_const_iterator(const Compare& comp = Compare())
			:
				_node(),
				_last_node(),
				_comp(comp)
			{}

			BST_const_iterator(T * node_p, T * last_node,
						const Compare& comp = Compare())
			:
				_node(node_p),
				_last_node(last_node),
				_comp(comp)
			{}

			BST_const_iterator(const BST_const_iterator& bst_it)
			:
				_node(bst_it._node),
				_last_node(bst_it._last_node),
				_comp()
			{}

			BST_const_iterator(const BST_iterator<T, Compare>& bst_it)
			:
				_node(bst_it._node),
				_last_node(bst_it._last_node),
				_comp()
			{}

			virtual ~BST_const_iterator() { }

			BST_const_iterator &operator=(const BST_const_iterator& bst_it)
			{
				if (*this == bst_it)
					return (*this);
				this->_node = bst_it._node;
				this->_last_node = bst_it._last_node;
				this->_comp = bst_it._comp;
				return (*this);
			}
			
			bool operator==(const BST_const_iterator& bst_it)
			{ return (this->_node == bst_it._node); }
			bool operator!=(const BST_const_iterator& bst_it)
			{ return (this->_node != bst_it._node); }
			reference operator*() const
			{ return (this->_node->value); }
			pointer operator->() const
			{ return (&this->_node->value); }
			BST_const_iterator& operator++(void)
			{
				T * cursor = _node;

				if (_node->right == _last_node)
				{
					cursor = _node->parent;
					while (cursor != _last_node
						&& _comp(cursor->value.first, _node->value.first))
						cursor = cursor->parent;
					_node = cursor;
				}
				else if (cursor == _last_node)
					_node = _last_node->right;
				else
				{
					cursor = _node->right;
					if (cursor == _last_node->parent
						&& cursor->right == _last_node)
						_node = cursor;
					else
					{
						while (cursor->left != _last_node)
							cursor = cursor->left;
					}
					_node = cursor;
				}
				return (*this);
			}

			BST_const_iterator operator++(int)
			{
				BST_const_iterator tmp(*this);
				operator++();
				return (tmp);
			}

			BST_const_iterator& operator--(void)
			{
				T * cursor = _node;

				if (_node->left == _last_node)
				{
					cursor = _node->parent;
					while (cursor != _last_node
						&& !_comp(cursor->value.first, _node->value.first))
						cursor = cursor->parent;
					_node = cursor;
				}
				else if (cursor == _last_node)
					_node = _last_node->right;
				else
				{
					cursor = _node->left;
					if (cursor == _last_node->parent
						&& cursor->left == _last_node)
						_node = cursor;
					else
					{
						while (cursor->right != _last_node)
							cursor = cursor->right;
					}
					_node = cursor;
				}
				return (*this);
			}

			BST_const_iterator operator--(int)
			{
				BST_const_iterator tmp(*this);
				operator--();
				return (tmp);
			}            

			T *         _node;
			T *         _last_node;
			Compare     _comp;
	};
}

#include <iostream>
// #include "BST.hpp"

int main()
{
  // int型のキーと値を持つ二分探索木を作成する
  ft::BST<int, int> bst;

  // ノードの挿入
  bst.insert(ft::make_pair(4, 4));
  bst.insert(ft::make_pair(1, 1));
  bst.insert(ft::make_pair(3, 3));
  bst.insert(ft::make_pair(2, 2));
  bst.insert(ft::make_pair(6, 6));
  bst.insert(ft::make_pair(5, 5));
  bst.insert(ft::make_pair(7, 7));

  // イテレーターを使用して二分探索木を反復処理する
  ft::BST<int, int>::iterator it = bst.begin();
  for (; it != bst.end(); ++it)
  {
    std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
  }

  // キーを使用して値を検索する
  ft::BST<int, int>::iterator search_it = bst.find(3);
  if (search_it != bst.end())
  {
    std::cout << "Found. Key: " << search_it->first << ", Value: " << search_it->second << std::endl;
  }
  else
  {
    std::cout << "Not found." << std::endl;
  }

  return 0;
}


#endif