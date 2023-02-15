#include <map>
#include <iostream>

int main()
{
    std::map<std::string, unsigned> C
	{
        {"John", 1000},
        {"Tom", 1400},
        {"Harry", 800}
    };

    if ( auto iter = C.find("John"); iter != end(C) )
	{
        std::cout << iter->second << std::endl;
    }

	else 
	{
        std::cout << "not exists" << std::endl;
    }
}