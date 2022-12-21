#include <iostream>
using namespace std;

//普通函数可以发生隐式类型转换
int Add1(int a, int b) {
	return a + b;
}

template<class T>
T Add2(T a,T b) {
	return a + b;
}

template<class T>
T Add3(T& a, T& b) {
	return a + b; 
	/*
	可以看出c++的泛型设计是更加灵活独特的(编译时泛型的操作符和成员等放行),如果用的好,则相对来说会更动态一点
	但用的不好会引入风险
	因为泛型T其实是未知是否存在对应的操作符的（或者是具体成员等）,但是编译放行了,所以运行时可能会因为不存在对应的东西而报错.
	*/
}

template<class T>
T Add4(T* a, T* b) {
	return *a + *b;
}


int main() {
	int a = 10;
	char c = 'c';
	cout<<Add1(a,c)<<endl;

	//泛型自动推导无法隐式类型转换
	//Add2(a,c); //错误

	//显式指定泛型可以发生隐式类型转换
	cout <<Add2<int>(a, c) << endl; //我已经指定了泛型是int，说明你必须要按照int类型给我转过来

	//测试一些错误,函数模板对参数列表是指针或引用,且显式指定同样无法发生隐式转换   (所以,隐式转换只能发生在参数进行值拷贝)
	//cout << Add3<int>(a, c) << endl;
	//cout << Add4<int>(&a,&c) << endl; //错误原因,指针是无法隐式类型转换的,注: 隐式转换(基础类型)与里氏转换是完全不同的概念
}