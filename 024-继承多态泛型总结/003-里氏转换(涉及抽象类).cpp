#include <iostream>
using namespace std;

//����ת��(��ת��)�ǲ���Ҫǿת��

class AbstractBase {
public:
	string baseName = "baseName";
	virtual void Test() = 0;
};

class CompletedSon : public AbstractBase {
public:
	string name;
	int age;
	CompletedSon(string name, int age) {
		this->name = name;
		this->age = age;
	}
	void Test() {
		cout << "son is being test" << endl;
	}
};


//�漰�����������������ת��(���ҽ�������������ת��)
void Test1() {
	cout << "Test5=========================================" << endl;
	CompletedSon cpSon1("����", 12);
	cpSon1.baseName = "sonName";
	cout << "cpSon1�ĵ�ַ=" << &cpSon1 << ",��СΪ" << sizeof cpSon1 << endl; //��С��CompletedSon��С

	//�������޷�ֱ�ӽ�������ʵ��(����ǿת), ��Ϊ������Ĺ��캯���޷���������, ������Ĺ��캯��ֻ�ܱ��������
	//AbstractBase abbase1 = cpSon1; //��������AbstractBase�Ŀ������캯��,�Ƿ��� 
	 //(AbstractBase)cpSon1; //ǿתͬ���������ÿ������������ʱʵ��,ͬ���Ƿ�!

	//�����ǳ������ӽ�������ʵ��

	//������ָ�� ָ������ʵ��(����������ת��)
	AbstractBase* abb1ptr = &cpSon1;
	cout << "abb1ptr�ĵ�ַ=" << abb1ptr << ",��СΪ" << sizeof * abb1ptr << endl; //��cpSon1��ַ��ͬ,����С��AbstractBase�Ĵ�С
	cout << "abb1ptr->baseName = " << abb1ptr->baseName << endl; //abb1ptr->baseName = sonName
	cout << "abb1ptr->name = " << ((CompletedSon*)abb1ptr)->name << endl; //abb1ptr->name = ����
	abb1ptr->Test();

	//���������� ��������ʵ��(����������ת��)
	AbstractBase& abb1ref = cpSon1;
	cout << "abb1ref�ĵ�ַ=" << &abb1ref << ",��СΪ" << sizeof  abb1ref << endl; //��cpSon1��ַ��ͬ,����С��AbstractBase�Ĵ�С
	cout << "abb1ref.baseName = " << abb1ref.baseName << endl; //abb1ref.baseName = sonName
	cout << "abb1ref.name = " << ((CompletedSon&)abb1ref).name << endl; //abb1ref.name = ����
	abb1ref.Test();

	//���һ��д��,��ĳЩ���������ôд�ŷ���Ԥ��,����ĳЩ������Ҫ��ʽ�ĸ������ò�����︸�����������ص����ȼ�
	AbstractBase& abb2ref = (AbstractBase&)cpSon1;
	cout << "abb2ref�ĵ�ַ=" << &abb2ref << ",��СΪ" << sizeof abb2ref << endl; //��cpSon1��ַ��ͬ,����С��AbstractBase�Ĵ�С
	abb2ref.Test();

	//����ͬ�����������ÿ������캯��.�Ƿ�!
	//AbstractBase abb3 = *abb1ptr;
}

//�����಻����ֱ�ӵ��ɲ���,��Ϊ�βλ�������������
//void Test2(AbstractBase b) {
//
//}

//�����಻����ֱ�ӵ��ɷ���ֵ,��Ϊ����ֵ��������������
//AbstractBase Test3() {
//
//}

int main() {
	Test1();

	//��������,��C++��, ���˶��������ĵط����κ�ʹ�ó�����ĵط�����Ҫ�ó�����ָ������������
}