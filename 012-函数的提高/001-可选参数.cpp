#include <iostream>
using namespace std;

//C++中的可选参数规定，如果前面出现可选参数，后面必须全部都是可选参数
int Sum(int num1,int num2=10,int num3=10) {
	return num1 + num2 + num3;
}

//可选参数只能出现在声明或者定义中的其中一个
//例如
void Test1(int a =10, int b=7);

void Test1(int a =10,int b=1) { //不允许这样，有二义性

}

int main() {
	int num1 = 5, num2 = 6, num3 = 7;
	cout << "sum1=" << Sum(num1) << endl;
	cout << "sum2=" << Sum(num1,num2) << endl;
	cout << "sum3=" << Sum(num1,num2,num3) << endl;
}