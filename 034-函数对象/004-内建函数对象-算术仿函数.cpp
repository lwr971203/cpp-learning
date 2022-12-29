#include <iostream>
#include <functional>  //要使用C++stl中内建的仿函数要引用这个functional头文件
using namespace std;

/*
- template<class T> T plus<T>`                //加法仿函数
- `template<class T> T minus<T>`              //减法仿函数
- `template<class T> T multiplies<T>`    //乘法仿函数
- `template<class T> T divides<T>`         //除法仿函数
- `template<class T> T modulus<T>`         //取模仿函数
- `template<class T> T negate<T>`           //取反仿函数
*/

void Test1() {
	negate<int> n;
	cout << n(100) << endl;
}

void Test2() {
	plus<int> p;
	cout << p(20, 30) << endl;
}

int main() {
	Test1();
	Test2();
}