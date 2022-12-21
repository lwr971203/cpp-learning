#include <iostream>
using namespace std;
#include <string>

int main() {
	//输入整型
	//int i = 1;
	//cout << "请输入一个整型" << endl;
	//cin >> i; //竟然不检查类型，蛇皮怪
	//cout << "输入的整型=" << i << endl;

	//输入字符型
	//char a = 'a';
	//cout << "请输入一个字符" << endl;
	//cin >> a;
	//cout << "输入的字符=" << a << endl;

	//输入字符串
	//string str = "default";
	//cout << "请输入一个字符串" << endl;
	//cin >> str;
	//cout << "输入的字符串=" << str << endl;

	//输入布尔值
	bool flag = true;
	cout << "请输入一个布尔值，可以为数字" << endl;
	cin >> flag; //实测输入true跟预想的结果不一样，输入的竟然为0.  输入0和非数字竟然都为0
	cout << "输入的布尔值=" << flag << endl;
}