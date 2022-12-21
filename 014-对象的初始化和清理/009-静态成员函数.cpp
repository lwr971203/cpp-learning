#include <iostream>
using namespace std;

class Person {
public :
	int _a;
	static int _b;
	static void StaticFunc() {
		cout << "StaticFunc������" << endl;
		//��������о�̬��Ա�����ɷ������ʵ����Ա(ֻ�ɷ�����ľ�̬��Ա).  ������ͨ��ʵ������������ĳ�Ա
		// ����ʵ����Ա,�ǿ���ֱ�ӷ����Լ����������о�̬��Ա(����private),�Լ������protected�������ϵľ�̬��Ա
		//InstanceFunc();
		//_a = 20;
		_b = 20;
	}
	void InstanceFunc() {
		cout << "InstanceFunc������" << endl;
	}

private :
	static void StaticPrivateFunc() {
		cout << "StaticPrivateFunc������" << endl;
	}
};
int Person::_b = 10;

int main() {
	Person p1;
	p1.InstanceFunc();
	p1.StaticFunc();
	Person::StaticFunc();

	//�ⲿ�޷�����
	//p1.StaticPrivateFunc();
	//Person::StaticPrivateFunc();
}