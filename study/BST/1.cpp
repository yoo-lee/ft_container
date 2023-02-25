using namespace std;
#include <iostream>
#include <cstddef>
#include <vector>
#include <iostream>

template <typename T>
class Vector<T>::iterator 
{
public:
    typedef T value_type;
    typedef T& reference;
    typedef T* pointer;
	// std::random_access_iterator_tagはイテレータのカテゴリを表すタグの一つで、
	// このタグが指定されたイテレータはランダムアクセスが可能なイテレータです。
	// ランダムアクセスイテレータはイテレータのポインタ演算子 (operator+, operator-)
	//  によって任意の要素にアクセスすることができる他、
	//  その他にもランダムアクセスイテレータの特徴として以下が挙げられます。
// operator[]による要素へのアクセスが可能
// operator<, operator<=, operator>, operator>=による比較演算子の使用が可能
// operator+, operator+=, operator-, operator-=によるポインタ演算子の使用が可能
// std::distanceによるイテレータ間の距離の計算が可能
// ランダムアクセスイテレータは、それ以下のイテレータの全ての機能を提供するため、
// 最も一般的に使用されるイテレータの一つです。
    typedef std::random_access_iterator_tag iterator_category;
    typedef std::ptrdiff_t difference_type;

    iterator(pointer ptr) : m_ptr(ptr) {}

    reference operator*() const {
        return *m_ptr;
    }

    pointer operator->() const {
        return m_ptr;
    }

    iterator& operator++() {
        ++m_ptr;
        return *this;
    }

    iterator operator++(int) {
        iterator temp(*this);
        ++m_ptr;
        return temp;
    }

    iterator& operator--() {
        --m_ptr;
        return *this;
    }

    iterator operator--(int) {
        iterator temp(*this);
        --m_ptr;
        return temp;
    }

    bool operator==(const iterator& other) const {
        return m_ptr == other.m_ptr;
    }

    bool operator!=(const iterator& other) const {
        return m_ptr != other.m_ptr;
    }

    bool operator<(const iterator& other) const {
        return m_ptr < other.m_ptr;
    }

    bool operator>(const iterator& other) const {
        return m_ptr > other.m_ptr;
    }

    bool operator<=(const iterator& other) const {
        return m_ptr <= other.m_ptr;
    }

    bool operator>=(const iterator& other) const {
        return m_ptr >= other.m_ptr;
    }

    iterator& operator+=(difference_type n) {
        m_ptr += n;
        return *this;
    }

    iterator operator+(difference_type n) const {
        iterator temp(*this);
        temp += n;
        return temp;
    }

    iterator& operator-=(difference_type n) {
        m_ptr -= n;
        return *this;
    }

    iterator operator-(difference_type n) const {
        iterator temp(*this);
        temp -= n;
        return temp;
    }

    difference_type operator-(const iterator& other) const {
        return m_ptr - other.m_ptr;
    }

    reference operator[](difference_type n) const {
        return *(m_ptr + n);
    }

private:
    pointer m_ptr;
};




int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Print out all the elements in vec
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Print out the element at index -2 in vec
    std::cout << "vec[-2]: " << vec[vec.size() - 2] << std::endl;

    // Print out all the elements in vec in reverse order
    for (std::vector<int>::reverse_iterator it = vec.rbegin(); it != vec.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

