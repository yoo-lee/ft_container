#include <algorithm>
#include <iostream>
#include <string>
#include <iostream>

template <class T>
class Stack
{
private:
public:
    T* stack;
    int index;
    Stack(int size) : index(0) { stack = new T[size]; }
    ~Stack() { delete [] stack; }
    void push(T item) { stack[index++] = item; }
    T pop() { return stack[--index]; }
};

// ストリーム挿入演算子のオーバーロード
template <typename T>
std::ostream& operator<<(std::ostream& os, const Stack<T>& stack)
{
    for (int i = 0; i < stack.index; i++) {
        os << stack.stack[i] << " ";
    }
    return os;
}

int main()
{
    Stack<int> stack(256);
    stack.push(123);
    stack.pop();
    std::cout << stack << std::endl;
    return 0;
}