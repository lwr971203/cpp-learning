#include <iostream>
using namespace std;

/*
- ����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
- �������󳬳���ͨ�����ĸ����������������Լ���״̬
- �������������Ϊ��������
*/

class MyPrint {
private:
	int call_count; //����������Գ���ͨ����,�������Լ���״̬
public:
	MyPrint() {
		this->call_count = 0;
	}
	void operator()(string msg) {
		cout << msg << endl;
		this->call_count++;
	}
	int GetCallCont() {
		return this->call_count;
	}
};

void Test1() {
	MyPrint mp;
	mp("Hello World");
	mp("Hello World");
	mp("Hello World");
	mp("Hello World");
	mp("Hello World");
	cout << "�����˺������� " << mp.GetCallCont() << "��" << endl;
}

void DoPrint(MyPrint& mp , string msg) {
	mp(msg);
}

int main() {
	Test1();
	MyPrint mp;
	string msg = "hello world";
	DoPrint(mp,msg);
}