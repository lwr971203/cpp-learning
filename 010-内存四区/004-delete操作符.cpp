#include <iostream>
using namespace std;

int* Func() {
	return new int(10);
}

void Test1() {
	int *p = Func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	//利用delete操作符释放指针指向的堆内存
	delete p;

	//再去解引用就会报错了，因为内存已经被释放
	//cout << *p << endl;
}

void Test2() {
	//通过new操作符开辟一段连续的堆内存（数组）
	int *arr = new int[100]; //返回首地址,C++全部统一成右式的数组写法不香吗?
	//int arr1[] = new int[200]; //报错,离了个大谱,C++语法及其不统一,混乱不堪
	for (int i = 0; i < 100; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; i < 100; i++)
	{
		cout << arr[i] << endl;
	}

	//释放数组的时候要加[]，因为它不知道你释放的是一段连续的内存
	delete[] arr; //虽然加了[]但还是玄学,它是怎么知道我连续的内存空间有几个数组元素

	//再去访问就是报错了
	for (int i = 0; i < 100; i++)
	{
		cout << arr[i] << endl;
	}
}
int main() {
	//Test1();

	Test2();
}