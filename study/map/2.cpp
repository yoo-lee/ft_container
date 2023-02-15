#include <iostream>
#include <map>

using namespace std;
int main()
{
  std::map<int,int> m{};

  cout << m.size() << endl; // 何も要素を追加していないので当然 0
  cout << m[1] << endl; // 要素は存在しない, 自動で0が追加される
  cout << m.size() << endl; // 自動で要素が追加されているので 1
}