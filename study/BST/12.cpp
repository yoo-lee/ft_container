using namespace std;
#include <iostream>
#include <cstddef>


void assign_3( int x )
{
    x = 3 ;
}

int main()
{
    int a = 1 ;
    assign_3( a ) ;

    // a == 1
}