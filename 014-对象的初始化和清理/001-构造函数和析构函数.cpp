#include <iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "Person ����Ĺ��캯������" << endl;
	}
	~Person() { //�������������в���
		cout << "Person �����������������" << endl;
	}
};

void Test() {
	Person p1; //������󴴽���ջ�ռ��С�������Test����������֮������������������
}

int main() {
	Test();
}