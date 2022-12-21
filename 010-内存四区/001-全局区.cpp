#include <iostream>
using namespace std;
#include <string>

//全局变量(全局的都在全局区)
int g_a = 10;
int g_b = 10;
//全局常量
const int c_g_a = 30;
const int c_g_b = 30;
int main() {
	//放在全局区的:全局变量，全局常量，静态变量（static）字面量
	cout << "全局变量g_a的地址:" << (int)&g_a << endl;
	cout << "全局变量g_b的地址:" << (int)&g_b << endl;
	static	int s_a = 20; //static表示只会初始化一次
	static	int s_b = 20;
	cout << "静态变量s_a的地址:" << (int)&s_a << endl;
	cout << "静态变量s_b的地址:" << (int)&s_b << endl;
	cout << "全局常量c_g_a的地址:" << (int)&c_g_a << endl;
	cout << "全局常量c_g_b的地址:" << (int)&c_g_b << endl;
	string testStr = "lwr"; //本质  string testStr = string("lwr");
	cout << "string类型的的字符串地址" << (int)&testStr << endl; //string类型的字符串明显和后面的局部变量局部常量同属于一个区域
	cout << "字符串字面量的地址:" << (int)&"lwr" << endl;

	//不在全局区的，局部变量，局部常量(用const修饰)
	int a = 40;
	int b = 40;
	const int c_l_a = 50;
	const int c_l_b = 50;
	cout << "局部变量a的地址:" << (int)&a << endl;
	cout << "局部变量b的地址:" << (int)&b << endl;
	cout << "局部常量a的地址:" << (int)&c_l_a << endl;
	cout << "局部常量b的地址:" << (int)&c_l_b << endl;
}