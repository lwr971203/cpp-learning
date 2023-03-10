#include <iostream>
using namespace std;

int main() {
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	//查看数组这个指针(首元素的首地址)的所存储地址
	cout << "数组的地址=>" << arr << endl; //输出了十六制的地址值, 如果需要看十进制就需要强转(int)
	//查看数组首元素的首地址值, 由于数组索引本质是指针解引用,所以是元素实例,取地址还须再加取址符&
	cout << "数组首元素的首地址值" << &arr[0] << endl; //与arr的值完全一致
	//查看数组的大小
	//这里求数组实例内存大小而不是数组指针本身的size的原因: 数组指针变量在具体上下文中显现为"带数组特性的指针". 所以数组指针与常规指针是不完全相同的,在某些上下文有细微的区别
	cout << "数组的大小=>" << sizeof arr << endl;
	//查看数组元素实例的大小
	cout << "数组元素实例的大小=>" << sizeof arr[0] << endl;
	//查看数组元素的个数
	cout << "数组的大小=>" << sizeof arr / sizeof arr[0] << endl; //10

	//测试不初始化时的数组
	int arr1[5];
	//地址
	cout << "arr1指向的地址" << arr1 << endl; //正常
	//大小
	cout << "arr1指向的内存大小" << sizeof arr1 << endl; //正常
	//首元素地址
	cout << "arr1首元素地址" << &arr1[0] << endl; //正常
	//首元素大小
	cout << "arr1首元素大小" << sizeof arr1[0] << endl; //正常
}