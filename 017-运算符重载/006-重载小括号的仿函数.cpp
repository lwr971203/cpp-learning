#include <iostream>
using namespace std;
#include <string>
class Print {
public:
	//重载这个小括号，使得实例对象本身具有()调用函数的功能
	void operator()(string msg) {
		cout << msg << endl;
	}

	//注:运算符不允许是静态的成员函数
	//static void operator()(string msg) {

	//}
};

class MyAdd {
public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
};

int main() {
	Print print;
	//由于在使用上像极了函数，所以也称为仿函数,也比较像C#中的委托
	print("Hello World"); //像极了Python 哈哈哈

	//可以直接使用匿名对象
	int num1 = 5,num2=6;
	cout << num1 << "+" << num2 << "=" << MyAdd()(num1, num2) << endl;
}