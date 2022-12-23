#include <iostream>
using namespace std;
#include <string>

template<typename T>
class Base {
public:
	T baseObj;
	virtual void Show() = 0;
};

//һ�ּ̳з�ʽ���̳е�ʱ��ָ������(����һ�����ŵ�˵��,�����;���̻�)
class Son1 :public Base<int> {
public:
	void Show() {
		cout << "baseObj������Ϊ��" << typeid(baseObj).name() << endl;
	}
};

//��һ�ּ̳з�ʽ���̳е�ʱ���������
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
	//ע���ʱ��������һ��������, ���Ҫ������ת���������Ҫ����Ҳ�̻��ɶ�Ӧ�ľ�����
	Son1 s1;
	Base<int>* base_ptr = &s1;
	base_ptr->Show();

	Son2<int,double> s2;
	Base<double>& base_ref = s2;
	base_ref.Show();
}