#include <iostream>
#include <map>

struct Person {
public:
    Person(const string &name, int height)
        : m_name(name)
        , m_height(height)
        {}
public:
    string m_name;
    int    m_height;
};

bool operator<(const Person &lhs, const Person &rhs)
{
    return lhs.m_name < rhs.m_name;
}
    int main ()
	{
		std::map<std::string, char> mp;
		std::map<int, double> mp; 
    // map<Person, int> mp;      // Person には比較演算子が定義されていないのでエラーになる
    // Person p("aaa", 170);
    mp[p] = 123;
	}