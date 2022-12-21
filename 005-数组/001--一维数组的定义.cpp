#include <iostream>
using namespace std;

int main() {
	//C++的数组延续了C的风格，变量后加[],变量前是元素的类型
	//数组初始化的时候一定要进行定长度,且长度不能改变

	//第一种
	//每个元素自动初始化0
	int arr1[5];  //C++中非new对象在栈中.所以这个非new对象是在栈中开辟,由(隐式)指针arr1所引用
	//未初始化任何元素值,一个未知的数据,也不像地址
	for (int i = 0; i < 5; i++)
	{
		cout << "arr1[" << i << "] = " << arr1[i] << endl; //-858993460,乱值
	}
	arr1[0] = 10;
	arr1[1] = 20;
	arr1[2] = 30;
	arr1[3] = 40;
	arr1[4] = 50;
	cout << "arr1[0]:" << arr1[0] << endl;
	cout << "arr1[1]:" << arr1[1] << endl;
	cout << "arr1[2]:" << arr1[2] << endl;
	cout << "arr1[3]:" << arr1[3] << endl;
	cout << "arr1[4]:" << arr1[4] << endl;

	//第二种
	int arr2[5] = {10,20,30}; //没有赋值的地方自动有默认值0
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;
	}

	//第三种
	int arr3[] = {10,20,30,40,50}; //隐式个数推断
	for (int i = 0; i < 5; i++)
	{
		cout << arr3[i] << endl;
	}
}