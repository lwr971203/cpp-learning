#include <iostream>
using namespace std;
#include <string>

template<typename T>
class Base {
public:
	T baseObj;
};

//һ�ּ̳з�ʽ���̳е�ʱ��ָ������
class Son1 :public Base<int> {
public:
	void Show() {
		cout << "baseObj������Ϊ��" << typeid(baseObj).name() << endl;
	}
};

//��һ�ּ̳з�ʽ���̳е�ʱ������÷���
template<typename T1, typename T2>
class Son2 :public Base<T2> {
public:
	T1 son2Obj;
	void Show() {
		cout << "baseObj������Ϊ��" << typeid(this->baseObj).name() << endl;
		cout << "son2Obj������Ϊ��" << typeid(son2Obj).name() << endl;
	}
};

int main() {
	Son1 s1;
	s1.Show();

	Son2<int,double> s2;
	s2.Show();
}