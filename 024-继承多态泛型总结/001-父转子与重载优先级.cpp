#include <iostream>
using namespace std;

class Base {
public:
	string baseName = "defaultBaseName";
	bool compare() {
		return true;
	}
	Base() {

	}
	Base(const Base& b) {
		cout << "������Base�Ŀ�������" << endl;
	}
	Base& operator=(Base& b) {
		cout << "������Base��Ĭ�Ͽ���" << endl;
		return *this;
	}
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

//����ʵ����������
//void Test1(Son son) {
//	cout << "void Test1(Son son)=>" << son.name << endl;
//}

//����ʵ����������
//template<class T>
//void Test1(T obj){
//	cout << "void Test1(T obj)=>" << obj.name << endl; //��,��ţ��,����ģ��֮��Ϳ�����д��
//}

//����ʵ����������
template<class T>
void Test1(T& obj) {
	cout << "void Test1(T& obj)=>" << obj.name << endl;
}

//����ʵ����������
//void Test1(Base base) {
//	Son son = (Son)base; //ע�⸸��ʵ���ǲ���������ʵ��ת��,ǿתҲ����
//		cout << "void Test1(Base base)=>" << son.name << endl;
//}

//����ʵ����������
void Test1(Base& base) {
	Son& son = (Son&)base; //���������ǿ�������������ת
	cout << "void Test1(Base& base)=>" << son.name << endl; //son�в�δ��name, cout��son.name��������,����û�������
}

//����ʵ����������
//void Test1(Base base) {
//	Son& son = (Son&)base; //ע�⸸��ʵ��Ҳ�ǿ�������������ת
//	cout << "void Test1(Base base)=>" << son.name << endl; //����������,���ҿ������ڴ�й¶
//}




//����ָ���������
void Test1(Son* son) {
	cout << "void Test1(Son* son)=>" << son->name << endl;
}

//����ָ�����
template<typename T>
void Test(T* obj) {
	if (obj == NULL)
	{
		cout << "��Ҫ�����ָ��лл" << endl;
		return;
	}
	cout << "void Test(T* obj)=>" << obj->name << endl;
}

//����ָ���������
void Test1(Base* base) {
	Son* son = (Son*)base; //����ָ�����������ָ��ת
	cout << "void Test1(Base* base)=>" << son->name << endl;
}



int main() {
	Son son1("����", 12);

	//Ĭ���������ȼ�����������ʵ��,����������ʵ����������,���û�оʹ��뷺��ʵ���������أ������û�оʹ��븸��ʵ����������
	//Test1(son1);

	//��������ʵ��,��û������ʵ����������,���뷺��ʵ����������
	Test1(son1);

	//Base base = son1;
	//���븸��ʵ��, ǿ�����ȸ���ʵ����������
	//Test1(base);

	/*
	����ʾ��
	Test1((Base)son1);
	����ԭ���ڲ����б���ǿת ,������ǿת�����Ǹ���ʱʵ����ȫ����,����ֱ�ӱ����ñ�������(Base&)ֱ�ӽ���,�����const����(���������Ż��������)���ǵĿ��Խ��յ�
	*/

	//��������ָ��,��������ָ���������
	//Test1(&son1);

	//��������ָ��,��û������ָ���������,���뷺��ָ���������
	Test(&son1);

	//���븸��ָ��,ǿ�����ȸ���ָ���������
	Test1((Base*)&son1);

	/*
	ע: c++�й��ڸ�ת�ӵ��������,����ǿת: ��ʵ��ת�����á�������ת�����á���ָ��ת��ָ��
		����һ�ֱ��벻����ת����ϵ, �������ʱ���߼��Ǵ���, ��������bug
	*/
}