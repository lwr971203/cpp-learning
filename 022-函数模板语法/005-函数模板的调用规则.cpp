#include <iostream>
using namespace std;

void Print(int a, int b) {
	cout << "��ͨ�����ĵ���" << endl;
}

template<typename T>
void Print(T a, T b) {
	cout << "����ģ��ĵ���" << endl;
}

template<typename T>
void Print(T a, T b, T c) {
	cout << "����ģ�����صĵ���" << endl;
}


int main() {
	int a = 10;
	int b = 20;
	//���ȵ�����ͨ����
	Print(a,b); 
	//�ղκ���ģ��ʵ��ǿ�Ƶ���
	Print<>(a,b);
	//����ģ����Է�������
	Print(a,b,10);
	//������ģ�����ƥ���ʱ�����ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';
	Print(c1,c2);
}