#include <iostream>
using namespace std;

//1��ģ�����Ҫ�Ƶ���һ�µ���������
template<typename T>
void Swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

//2�����ͱ��뱻ȷ��
template<typename T>
void Func() {
	cout << "Func�ĵ���" << endl;
}

int main() {
	int a = 10;
	int b = 20;
	Swap(a, b); //��ȷ
	char c = 'c';
	//Swap(a,c); //���� ���޷��Ƶ���һ�µ�T����

	//Func(); //��������޷�ȷ�����͵���������
	Func<int>(); //��ʽָ��,����ʱȷ��
	Func<double>();


}