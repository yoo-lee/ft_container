#include <algorithm>
#include <iostream>
#include <string>

template <class T, int N>
void init(T (&arr)[N])
{
    for (int i = 0; i < N; ++i)
        arr[i] = T();
}

int main()
{
    int arr[256];
    init(arr);   // init(int (&arr)[256]) と具体化される
}