#include <iostream>
using namespace std;

class Base {
public:
	static  int _a;
	static void Func() {
		cout << "Base - static void Func()" << endl;
	}
	static void Func(int a) {
		cout << "Base - static void Func(int a)" << endl;
	}
};
int Base::_a = 10;

class Son :public Base {
public:
	static int _a;
	static void Func() {
		cout << "Son - static void Func()" << endl;
	}
};
int Son::_a = 20;

void Test1() {
	cout << "ͨ������ȥ����ͬ����̬����" << endl;
	Son son;
	cout << "Son �еľ�̬_a=" << son._a << endl;
	cout << "Base�еľ�̬_a=" << son.Base::_a << endl;

	cout << "ͨ������ȥ����ͬ����̬����" << endl;
	cout << "Son�еľ�̬_a=" << Son::_a << endl;
	cout << "Base�еľ�̬_a=" << Son::Base::_a << endl; //ǰһ��::��ʾͨ���������ʣ���һ����ʾBase��������
	cout << "Base�еľ�̬_a=" << Base::_a << endl; 
}

void Test2(){
	cout << "ͨ������ȥ����ͬ����̬��Ա����" << endl;
	Son son;
	son.Func();
	son.Base::Func();
	//son.Func(10); //ͬ����ͬ����̬��Ա����Ҳ�����ص��������е����ذ汾
	son.Base::Func(10);

	cout << "ͨ������ȥ����ͬ����̬��Ա����" << endl;
	Son::Func();
	Son::Base::Func();//ǰһ��::��ʾͨ���������ʣ���һ����ʾBase��������
	Base::Func();
	//Son::Func(10);//ͬ����ͬ����̬��Ա����Ҳ�����ص��������е����ذ汾
	Son::Base::Func(10);
	Base::Func(10);
}

//�����޷�����������κγ�Ա
void Test() {
	Base::Func();
	//Base::Son::Func();
}

int main() {
	Test1();
	Test2();
}