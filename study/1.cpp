#include <type_traits>
#include <iostream>

template <class T>
auto f(T) -> typename std::enable_if<std::is_integral<T>::value>::type
{
  std::cout << "Tは整数型" << std::endl;
}

template <class T>
auto f(T) -> typename std::enable_if<!std::is_integral<T>::value>::type
{
  std::cout << "Tは整数型以外" << std::endl;
}

int main()
{
  f(3);
  f("hello");
}