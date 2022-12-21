#include <iostream>
using namespace std;

void Print(int a, int b) {
	cout << "普通函数的调用" << endl;
}

template<typename T>
void Print(T a, T b) {
	cout << "函数模板的调用" << endl;
}

template<typename T>
void Print(T a, T b, T c) {
	cout << "函数模板重载的调用" << endl;
}


int main() {
	int a = 10;
	int b = 20;
	//优先调用普通函数
	Print(a,b); 
	//空参函数模板实现强制调用
	Print<>(a,b);
	//函数模板可以发生重载
	Print(a,b,10);
	//当函数模板更加匹配的时候，优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';
	Print(c1,c2);
}