#include <iostream>
using namespace std;

//1、模板必须要推导出一致的数据类型
template<typename T>
void Swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

//2、泛型必须被确定
template<typename T>
void Func() {
	cout << "Func的调用" << endl;
}

int main() {
	int a = 10;
	int b = 20;
	Swap(a, b); //正确
	char c = 'c';
	//Swap(a,c); //错误 ，无法推导出一致的T类型

	//Func(); //编译错误，无法确定泛型的数据类型
	Func<int>(); //显式指定,编译时确定
	Func<double>();


}