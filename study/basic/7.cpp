#include <iostream>
#include <array>

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