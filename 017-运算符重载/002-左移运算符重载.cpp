#include <iostream>
using namespace std;

class Person {
	friend ostream& operator<<(ostream& out, Person& p); //ʹ���㷢���ؿ��Է��ʵ�˽�г�Ա
private:
	int _a;
	int _b;

public:
	Person(int a, int b) :_a(a), _b(b) {

	}

	//ͨ�������ó�Ա����ȡ����<<����Ϊ����Person << cout ,�ﲻ��Ч��
};

//��Ҫ�ﵽЧ������Ҫʹ��ȫ�ֺ���ȡ����<<
ostream& operator<<(ostream& out, Person& p) {
	cout << "Person._a:" << p._a << "," << "Person._b:" << p._b << endl;
	return out;
}

int main() {
	Person p = Person(10, 20);
	cout << p << "\tHello World!";
}