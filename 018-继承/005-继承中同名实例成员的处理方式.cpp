#include <iostream>
using namespace std;

class Base {
public:
	int _a;
	Base() {
		_a = 100;
	}

	void Show() {
		cout << "Base�е�Show����" << endl;
	}

	void Show(int a) {
		cout << "Base�е�����Show(int a)" << endl;
	}
};

class Son :public Base {
public:
	int _a;
	Son() {
		_a = 200;
	}

	void Show() {
		cout << "Son�е�Show����" << endl;
	}

	//�����ڲ����ʸ���ĳ�Ա
	void ShowBaseMember() {
		cout << "Son�з���Base�е�_a" << endl;
		cout << "Son�з���Base�е�Show(int a)==>";
		//Show(300); //�﷨����,�����������ڲ�Ҳ�޷�ֱ�ӷ��ʸ��౻���صĳ�Ա
		Base::Show(200); //��Ҫ�Ӹ�����������,����ע��û��C#�еĹؼ���base
	}
};

void Test1() {
	Son son;
	cout << "Son�е�_a=" << son._a << endl; //˵�������ͬ���ֶ�ͬ�������ظ�����ֶ�
	cout << "Base�е�_a=" << son.Base::_a << endl; //���Կ���,C++�ṩ����ʽ��������İ취���ñ����صĸ����Ա,C#����û���ṩ. ����ʵ��������Զ��������.����,�������Զ����������(::)����
}

void Test2() {
	Son son;
	son.Show(); //˵�������ͬ������ͬ�������ظ���ĺ���
	son.Base::Show(); //���Կ���,C++�ṩ����ʽ��������İ취���ñ����صĸ����Ա,C#����û���ṩ
}

void Test3() {
	Son son;
	//son.Show(200); //ֻҪ������ͬ����Ա�������ͻ����ص����������ͬ����������������������,������C#���������ظ��෽�����в�ͬ,C++�����˵�
	son.Base::Show(300);
}

void Test4() {
	Son son;
	son.ShowBaseMember();
}

//�����޷�����������κγ�Ա,��Ϊ����֪��������������������
void Test5() {
	Base base;
	cout << "the a is " << base._a << endl;
	base.Show();
}

int main() {
	Test1();
	Test2();
	Test3();
	Test4();
	Test5();
}