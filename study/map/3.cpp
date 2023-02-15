#include <iostream>
#include <map>
using namespace std;
int main()
{
	std::map<std::string, int> mp;
	{
		mp["aiueo"] = 1;
		mp["kakikukeko"] = 2;
	}

// std::map<std::string, std::string> mp;
//     mp["aiueo"] = "123";
//     mp["kakikukeko"] = "9876";

//   cout << mp.size() << endl; // 何も要素を追加していないので当然 0
  cout << mp["aiueo"] << endl; // 要素は存在しない, Abort! out_of_range

}

// キー、値ともに文字列型の連想配列 mp を宣言し、
// "aiueo" の値を "123" に、"kakikukeko" の値を "9876" に設定しなさい