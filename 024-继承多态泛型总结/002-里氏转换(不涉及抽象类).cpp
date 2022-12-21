#include <iostream>
using namespace std;

//����ת��(��ת��)�ǲ���Ҫǿת��

class Base {
public:
	string baseName = "defaultBaseName";
	bool compare() {
		return true;
	}
	Base() {

	}
	//Base(const Base& b) {
	//	cout << "������Base�Ŀ�������" << endl;
	//}
	//Base& operator=(Base& b) {
	//	cout << "������Base��Ĭ�Ͽ���" << endl;
	//	return *this;
	//}
};

class Son :public Base {
public:
	string name;
	int age;
	Son(string name, int age) {
		this->name = name;
		this->age = age;
	}
};

//���漰������Ŀ���������ת��
void Test1() {
	cout << "Test1=========================================" << endl;
	Son son1("����", 12);
	cout << "son1�ĵ�ַ" << &son1 << ", son1�Ĵ�С" << sizeof son1 << endl; //��С��Son�Ĵ�С
	Son son2("����", 14);

	son1.baseName = "changeBaseName";

	//���﷢���������� (����������ת��)
	Base base1 = son1;
	cout << "base1�ĵ�ַ" << &base1 << ", base1�Ĵ�С" << sizeof base1 << endl; //��ַ��son1��ͬ,�Ҵ�С��Base�Ĵ�С
	cout << "base1.baseName=" << base1.baseName << endl; //base1.baseName=changeBaseName

	//���﷢����������(��ǿת��һ��,��������ʱʵ��,����ȫ����),Ȼ���ٷ�����������,����һ��ִ��������
	base1 = (Base)son1;
	cout << "base1�ĵ�ַ" << &base1 << ", base1�Ĵ�С" << sizeof base1 << endl; //��ַ��son1��ͬ,�Ҵ�С��Base�Ĵ�С

	//���﷢��Ĭ�Ͽ���(����������ת��)
	base1 = son2;
	cout << "base1�ĵ�ַ" << &base1 << ", base1�Ĵ�С" << sizeof base1 << endl; //��ַ��son2��ͬ,�Ҵ�С��Base�Ĵ�С
	cout << "base1.baseName=" << base1.baseName << endl; //base1.baseName=defaultBaseName

	//ע: �����εĵ�ַʼ��δ��
}

//���漰�����������������ת��
void Test2() {
	cout << "Test2=========================================" << endl;
	Son son1("����", 12);
	cout << "son1�ĵ�ַ" << &son1 << ", son1�Ĵ�С" << sizeof son1 << endl; //��С��Son�Ĵ�С

	//����ָ�� ָ������ʵ��(����������ת��)  Ҳ����˵���Ǹ���ָ���������ָ��,��ΪSon* �ȼ��� &son1
	Base* baseptr = &son1;
	cout << "baseptr�ĵ�ַ" << baseptr << ", baseptr�Ĵ�С" << sizeof * baseptr << endl; //��ַ��son1��ͬ,�Ҵ�С��Base�Ĵ�С

	//�������� ��������ʵ��(����������ת��)
	Base& baseref = son1;
	cout << "baseref�ĵ�ַ" << &baseref << ", baseref�Ĵ�С" << sizeof baseref << endl; //��ַ��son1��ͬ,�Ҵ�С��Base�Ĵ�С
}

int main() {
	Test1();
	Test2();
}