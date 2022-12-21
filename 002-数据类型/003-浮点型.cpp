#include <iostream>;
using namespace std;

int main() {
	float f1 = 3.1415926f;
	double d1 = 3.1415926;
	//默认输出5位有效数字
	cout << "f1:" << f1 << endl; 
	cout << "d1:" << d1 << endl;

	//科学计数法
	float f2 = 3e-4;
	double d2 = 3e-4; //控制台对于-5次方输出就不是很给力了
	cout << "f2:" << f2 << endl;
	cout << "d2:" << d2 << endl;
}