#include <iostream>
using namespace std;

//注:返回值不属于局部变量,并且它的行为比较特殊
int main() {
	int a = 10;
	cout << "a = " << a << endl;
	system("pause");
	return 0;
}

//C++的变量区分的比较开,分为实例变量、指针变量、与引用变量