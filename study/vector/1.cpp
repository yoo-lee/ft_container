# include <iostream>
# include <string>
# include <fstream>


template class<T>
class Hoge {
public:
    Hoge(std::string&, int);       //  コンストラクタ
};

	int main ()
	{

    std::vector<Hoge> v;
    v.emplace_back("abc", 123);   // push_back(Hoge("abc", 123)) と同意
	}