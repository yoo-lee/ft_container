#include <iostream>
#include <array>

class CIntArray
{
	template <class T, int N>
void init(T (&arr)[N])
{
    for (int i = 0; i < N; ++i)
        arr[i] = T();
}
};

void Disp(CIntArray array)
{
    int i;

    for(i = 0; i < array.NumOf(); i++)
        cout << array.Get(i) << ' ';
    cout << endl;
}

int main()
{
    CIntArray arrayAtoZ('Z' - 'A' + 1);
    int       i;

    for(i = 0; i < arrayAtoZ.NumOf(); i++)
        arrayAtoZ.Set(i, 'A' + i);
    Disp(arrayAtoZ);
    Disp(i);

    return 0;
}