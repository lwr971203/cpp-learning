#include <iostream>
using namespace std;

int main() {
	//数组名的本质上存了首元素地址的指针,是特殊的指针常量.不同的是,它具有表达数组的特性（比如能用sizeof得到取到数组实例的内存大小）
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	//常规指针模拟数组
	int* p1 = arr1;
	cout << "数组的首个元素的值为:" << *p1 << endl;
	//因为是int型的指针，所以每次p1++保存的地址值都会向后移四个字节(四个地址)
	p1++;
	cout << "数组的第二个元素的值为:" << *p1 << endl;

	//利用指针遍历数组
	//方式1：
	cout << "方式1:=============" << endl;
	int* p2 = arr1;
	for (int i = 0; i < 10; i++)
	{
		cout << *p2 << endl;
		p2++;
	}
	//方式2：
	p2 = arr1;
	cout << "方式2:=============" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << *(p2 + i) << endl; //注:指针不可被数赋值,因为不是一个类型.   但是指针可以和数进行临时运算,此时数被提升为地址数
	}
	//方式3:
	cout << "方式3:=============" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << *(p2++) << endl;
	}
	//方式4：利用后面的指针代理数组，使用索引

	//揭秘数组索引的本质：arr[i]==*(arr+i)	说明索引可近似看成常量指针的解引用
	for (int i = 0; i < 10; i++)
	{
		cout << "arr[" << i << "]=" << arr1[i] << "\t";
		cout << "arr[" << i << "]=" << *(arr1 + i) << endl;
	}

	//指针内存位移的实质
	double arr2[] = { 1.0,2.1,3.2,4.3 };
	cout << "arr2的首地址:" << (int)arr2 << endl;
	cout << "arr2的首地址:" << (int)(arr2 + 1) << endl; //向后移动八字节(一个double)
	cout << "arr2的首地址:" << (int)arr2 + 1 << endl; //单纯的首地址地址加一
	cout << "arr2[1]的地址:" << (int)&arr2[1] << endl; //与第二个保持一致
	cout << "arr2[1]的地址:" << (int)&*(arr2 + 1) << endl; //与第二个保持一致

	//指针指向数组首地址，当成数组来使用,实现对数组的代理
	int arr3[] = { 1,2,3,4,5 };
	const int* p3 = arr3;
	for (int i = 0; i < 5; i++)
	{
		cout << p3[i] << endl; //数组指针可以用索引,常规指针也可以用
	}

	//测试直接偏移地址取实例信息,但不改变指针指向
	cout << "测试直接移动内存地址" << endl;
	int* p4 = &arr3[2];
	cout << "arr3[2]的值:" << arr3[2] << endl;
	cout << "通过p4 + 1得到arr3[3]的地址" << (int)(p4 + 1) << endl;
	cout << "通过*(p4 + 1)得到arr3[3]的元素实例" << *(p4 + 1) << endl;
	cout << "通过&p4[1]得到arr3[3]的地址" << (int)&p4[1] << endl;
	cout << "通过p4[1]得到arr3[3]的值" << p4[1] << endl;
	//指针指向地址未变
	cout << "指针p4指向的地址" << (int)p4 << endl;

}