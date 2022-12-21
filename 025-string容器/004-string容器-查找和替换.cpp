#include <iostream>
using namespace std;
#include <string>

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