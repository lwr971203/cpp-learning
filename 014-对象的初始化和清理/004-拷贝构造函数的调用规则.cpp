#include <iostream>
using namespace std;

//��Ĭ������£�C++���������ṩ���������ĸ�������Ĭ�Ϲ��캯��(��ʵ��),Ĭ����������(��ʵ��),Ĭ�Ͽ������캯��(ǳ����),Ĭ�Ͽ�������(ǳ�����ĸ�ֵ����)
class Person {
	/*Person() {
		cout << "Person��Ĭ�Ϲ��캯��" << endl;
	}*/
public:
	Person(int a) {
		cout << "Person���вι��캯��" << endl;
		_age = a;
	}
	Person(const Person &p) {
		cout << "Person�Ŀ������캯��" << endl;
	}
	~Person() {
		cout << "Person����������" << endl;
	}

	int _age;
};

void Test1() {
	//Person p1; //�ṩ�вι��죬Ӱ��Ĭ���޲ι���
	Person p2(10);
}
void Test2() {
	Person p1(10);
	Person p2(p1); //�ṩ�вι��죬��Ӱ��Ĭ�Ͽ�������
	cout << "p2._age=" << p2._age << endl;
}



int main() {
	//����1������ṩ���вι��캯�����Ͳ����ṩ�޲ι��캯�������Ի��ṩ�������캯��
	//Test1();
	//Test2();

	//����2������ṩ�˿������죬�Ͳ����ṩ�޲ι���,��ʵ���ϸ�������һ���ģ���������Ҳ���вι���

}