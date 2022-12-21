#include "swap.h" //与前面写的swap.h头文件关联,这里的源文件用来实现


void Swap(int num1,int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;

	//swap.h中已经包含了iostream头文件里的std命名空间了,所以直接用
	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;
}