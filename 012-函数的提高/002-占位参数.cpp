#include <iostream>
using namespace std;

//占位参数，只写一个数据类型就行，但是你必须给我传
void TestFunc1(int a, int) {
	cout << a << endl;
}

//占位参数可以是可选参数
void TestFunc2(int a, int = 10) {
	cout << a << endl;
}
int main() {
	TestFunc1(1,2);
	TestFunc2(15);
}