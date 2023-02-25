template <typename T>
class Vector {
public:
    Vector() {
        m_size = 0;
        m_capacity = 1;
        m_data = new T[m_capacity];
    }

    ~Vector() {
        delete[] m_data;
    }

    void push_back(const T& val) {
        if (m_size == m_capacity) {
            m_capacity *= 2;
            T* new_data = new T[m_capacity];
            for (size_t i = 0; i < m_size; i++) {
                new_data[i] = m_data[i];
            }
            delete[] m_data;
            m_data = new_data;
        }
        m_data[m_size++] = val;
    }

    size_t size() const {
        return m_size;
    }

    const T& operator[](size_t index) const {
        return m_data[index];
    }

    T& operator[](size_t index) {
        return m_data[index];
    }

    // Define iterator and const_iterator classes
    class iterator {
    public:
        typedef T value_type;
        typedef T& reference;
        typedef T* pointer;
        typedef std::random_access_iterator_tag iterator_category;
        typedef std::ptrdiff_t difference_type;

        iterator(T* ptr) : m_ptr(ptr) {}

        reference operator*() const {
            return *m_ptr;
        }

        pointer operator->() const {
            return m_ptr;
        }

        iterator& operator++() {
            m_ptr++;
            return *this;
        }

        iterator operator++(int) {
            iterator temp(*this);
            m_ptr++;
            return temp;
        }

        iterator& operator--() {
            m_ptr--;
            return *this;
        }

        iterator operator--(int) {
            iterator temp(*this);
            m_ptr--;
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
        T* m_ptr;
    };

    class const_iterator {
    public:
        typedef T value_type;
        typedef const T& reference;
        typedef const T* pointer;
        typedef std::random_access_iterator_tag iterator_category;
        typedef std::ptrdiff_t difference_type;

        const_iterator(const T* ptr) : m_ptr(ptr) {}

        reference operator*() const
