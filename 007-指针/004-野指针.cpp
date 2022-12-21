#include <iostream>
using namespace std;

int main() {
	//野指针就是广义上访问了潜在非法的内存地址,或者说指向了一个未知地址不可控的地址
	int *p = (int*)0x1100; //这个直接指针指向某块地址的操作是允许的，但存在的潜在错误是，指向的内存地址是无法访问的；
	cout << *p << endl; //运行报错
}