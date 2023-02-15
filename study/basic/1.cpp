#include <type_traits>
#include <iostream>
template <typename U>
U divide (U x, U y)
{
	return x/y;
}
template <typename T>
T add(T a,T b){
    return a + b;
}

template <>
float add(float a,float b){
    return a - b;
}
int main()
{
  int n = add(3, 5);
  std::cout << n << std::endl;
  int m = divide(3.6, 5.1);
  std::cout << m << std::endl;
  float s = add(3.6f, 5.1f);
  std::cout << s << std::endl;
//   add("hello");
	// int n =	square(10, );
}