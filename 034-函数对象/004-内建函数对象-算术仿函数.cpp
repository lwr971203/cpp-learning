#include <iostream>
#include <functional>  //Ҫʹ��C++stl���ڽ��ķº���Ҫ�������functionalͷ�ļ�
using namespace std;

/*
- template<class T> T plus<T>`                //�ӷ��º���
- `template<class T> T minus<T>`              //�����º���
- `template<class T> T multiplies<T>`    //�˷��º���
- `template<class T> T divides<T>`         //�����º���
- `template<class T> T modulus<T>`         //ȡģ�º���
- `template<class T> T negate<T>`           //ȡ���º���
*/

void Test1() {
	negate<int> n;
	cout << n(100) << endl;
}

void Test2() {
	plus<int> p;
	cout << p(20, 30) << endl;
}

int main() {
	Test1();
	Test2();
}