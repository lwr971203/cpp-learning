#include <iostream>
using namespace std;
//�����������ɳ���Ա�ֶ�ȡ�ͷţ���һֱδ�ͷţ�����ϵͳ�ڹرճ����ʱ���ͷ�(��������ڴ�й¶)
int* Func() {
	//ʹ��new�ؼ����ڶ��ڴ��п��ٿռ�
	int* p = new int(10); //���ص��Ƕ�Ӧ���͵Ķ�ʵ����ַ
	return p;
}
int main() {
	int* p = Func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
}