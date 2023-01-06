#include <iostream>
using namespace std;
//C++中的模板类型就是C#中的泛型,这个泛型是真泛型,是一个类型占位符,希望在运行时才确定具体类型.  (但如果使用显式指定方式,则在编译时就提前确定)
//唯独JAVA中是假泛型(编译后就类型擦除了全部编程Object,可能造成一些运行时的逻辑与写代码的逻辑不符的bug)

/*
C++中的typename和class 关键字定义泛型的时几乎是一样的
使用时有区别: 例如使用T::X, X是T中的内部类或者是内嵌依赖类型别名.但编译器会将T::X识别为静态成员(这是合理的)
		如果此时对T::X前面加上typename关键字标记,则准确表明T::X表达的是一个内部类名称或者是内嵌依赖类型别名
		所以C++中的泛型比C#中的泛型更加灵活,typename T::X,可以表达这个泛型T里的内部类或者是内嵌依赖类型

敲重点: C++中的这个泛型并不是完全是类型参数, 可能是数值参数
			在后面高级的编程中经常会看到泛型当成具体数据来用,而不是类型
*/		  


template<typename T> //定义一个泛型
bool Swap(T& a, T& b) {
	T temp = a; //实例的赋值应该是浅拷贝赋值
	a = b;
	b = temp;
	return true;
}
int main() {
	int a = 10;
	int b = 20;
	double x = 30;
	double y = 40;
	//自动类型推导
	Swap(a, b);
	Swap(x, y);
	cout << "a=" << a << ",b=" << b << endl;
	cout << "x=" << x << ",y=" << y << endl;

	//显式指定类型
	Swap<double>(x, y);
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
}