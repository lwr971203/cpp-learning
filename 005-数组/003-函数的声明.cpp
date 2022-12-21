#include <iostream>
using namespace std;

//C和C++程序是顺序结构,必须在调用前声明或者定义,这是面向过程的弊端,从而有了头文件这种垃圾设计
//函数的声明可以都多次，但只能存在一个定义
int GetMax(int , int );  //纯声明可以省略形参,延续c语言风格
int GetMax(int num1, int num2); 
int GetMax(int num1, int num2); 

int main() {
	int num1 = 10;
	int num2 = 20;
	cout << "The Max Vlaue is :" << GetMax(num1,num2) << endl;
}

int GetMax(int num1,int num2) {
	return num1 > num2 ? num1 : num2;
}