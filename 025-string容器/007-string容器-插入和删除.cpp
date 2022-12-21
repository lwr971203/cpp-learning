#include <iostream>
using namespace std;
#include <string>

int main() {
	string str = "hello world";
	//插入
	str.insert(1,"333");
	cout << str << endl;

	//从指定位置删除几个字符
	str.erase(1,3);
	cout << str << endl;
}