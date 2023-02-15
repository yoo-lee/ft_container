#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

template <typename T>
class myclass
{
public:
    T value;
	
    friend ostream& operator<<(ostream& os, const myclass<T>& obj)
    {
        return os << obj.value;
    }
};

int main ()
{
    myclass<T> a;
    a.value = 10;
    cout << a << endl;
    return 0;
}
