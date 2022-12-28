#include <iostream>
using namespace std;
#include <string>

/*
- int find(const string& str, int pos = 0) const;`              //查找str第一次出现位置,从pos开始查找
- `int find(const char* s, int pos = 0) const; `                     //查找s第一次出现位置,从pos开始查找
- `int find(const char* s, int pos, int n) const; `               //从pos位置查找s的前n个字符第一次位置
- `int find(const char c, int pos = 0) const; `                       //查找字符c第一次出现位置
- `int rfind(const string& str, int pos = npos) const;`      //查找str最后一次位置,从pos开始查找
- `int rfind(const char* s, int pos = npos) const;`              //查找s最后一次出现位置,从pos开始查找
- `int rfind(const char* s, int pos, int n) const;`              //从pos查找s的前n个字符最后一次位置
- `int rfind(const char c, int pos = 0) const;  `                      //查找字符c最后一次出现位置
- `string& replace(int pos, int n, const string& str); `       //替换从pos开始n个字符为字符串str
- `string& replace(int pos, int n,const char* s); `                 //替换从pos开始的n个字符为字符串s
*/
void Test1() {
	string str = "Hellor World";
	int index = str.find("or"); //从左向右找第一个
	cout << index << endl;

	index = str.rfind("or"); //从右向左找第一个，返回的还是从左向右计算的索引
	cout << index << endl;
}

void Test2() {
	string str = "Hello World";
	str.replace(6,5,"大老板"); //从第几号索引替换几个字符
	cout << str << endl;
}

int main() {
	Test1();

	Test2();
}