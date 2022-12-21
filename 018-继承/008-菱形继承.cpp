#include <iostream>
using namespace std;

class Animal {
public:
	string name;
};

class Sheep1:public Animal {
public:
	Sheep1() {
		name = "��";
	}
};
class Camel1 :public Animal {
public:
	Camel1() {
		name = "����";
	}
};
class Caonima1 :public Sheep1, public Camel1 {

};
void Test1() {
	Caonima1 caonima;
	//�����μ̳��ж�үү��̳����������ݣ�����Ҫ��������ȥ�޶�����.  ��������ô˵�������Դ�˷�
	cout << "sizeof is " << sizeof caonima << endl; //80���ֽ�,�պ�C++���ַ���Ĭ�ϴ�С��40���ֽ�
	cout << "caonima.Sheep1::name=" << caonima.Sheep1::name << endl;
	cout << "caonima.Camel1::name=" << caonima.Camel1::name << endl;
}

//������̳н�����μ̳�����
//���̳еĻ����������ࡣ�ײ��������������ָ��̳и����Ա,����������û�з����ı�,�������糣��̳�.  ��Ҫ��Ϊ�˷�ֹ�����̳�ʱ�������μ̳�
class Sheep2 :virtual public Animal { 
public:
	Sheep2() {
		name = "��";
	}
};
class Camel2 :virtual public Animal {
public :
	Camel2() {
		name = "����";
	}
};
//���������μ̳�,�Ҷ�����඼����̳���үү��ʱ,����������ָ��ͬʱָ��үү���ͬһ�ݳ�Ա
class Caonima2 :public Sheep2, public Camel2 {

};
void Test2() {
	Caonima2* caonima = new Caonima2();
	cout << "size is " << sizeof * caonima << endl; //56,˵���պô���һ���ַ���name(40���ֽ�),������������������ָ��16�ֽ�
	//��������д��û������
	cout << "caonima.Sheep2::name" << caonima->Sheep2::name << endl;
	cout << "caonima.Camel2::name=" << caonima->Camel2::name << endl; //��̳еĸ�������޸���ͬһ������
	
	//ֱ����������,ֻ��һ������
	cout << "caonima.name=" << caonima->name << endl;
}

void main() {
	Test1();
	Test2();
}