#include <iostream>
using namespace std;

//定义一个类
class Circle {
//C++与C#的区别就是访问修饰符是以分类的形式书写
private:
	const double PI = 3.1415926;
public:
	int radius;
	double CalculateZC() {
		return 2 * radius*PI;
	}
};
int main() {
	Circle circle; //C++中声明就实例化了，直接在栈中开辟了一个内存空间
	circle.radius = 10;
	cout << "半径为10的圆的周长:" << circle.CalculateZC() << endl;
}