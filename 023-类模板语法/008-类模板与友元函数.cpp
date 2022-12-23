#include <iostream>
using namespace std;

//��Ԫ���������б��뺬�ж�̬�ķ�����, ���ҷ���ֻ������������ṩ�ķ���,����ֻ������д��
template<class T1, class T2>
class Person; //����ӷֺŷǳ���, �о��﷨������
template<class T1, class T2>
void ShowPerson2(Person < T1, T2>& p) {
	cout << "name=" << p.name << ",age=" << p.age << endl;
}

template<class T1, class T2>
class Person {
	//��Ԫ��������ʵ��
	friend void ShowPerson2<>(Person < T1, T2>& p); //�����<>��ɵ��  ����Ī������Ļ�����....����û��������ִ�е�
private:
	T1 name;
	T2 age;
public:
	Person(T1 name, T2 age) {
		this->name = name;
		this->age = age;
	}

	//��������Ԫ����C++��bug��ʾ=============================================================================
	/*
	ע��
	c++����������ʵ����Ԫ���������������û�취���˼ҹ涨��
	���������Ԫ�����Ǿ��Բ��������ظ������, �͸�ȫ�ֺ���һ��
	*/

	//����Ȳ���ȫ�ֺ���,Ҳ���ǳ�Ա����,�����Ϻ�����û���κΰ취��������
	//���Ҵ�ʱ�����Ԫ������ȷ����, �����º����ظ������bug
	//friend void ShowPerson1(double d) {
	//	cout << "�ұ�������" << endl;
	//}

	////��Ҳ��һ��ȷ��������ʵ�ֵ���Ԫ����,������ȫ�ֵ�,����д���������ظ������bug
	//friend void ShowPerson2(Person<string, double> p) {
	//	cout << "ShowPerson2��������" << endl;
	//}

	//��Ҳ�Ǹ�ȷ��������ʵ�ֵ���Ԫ����, ������ȫ�ֵ�
	//����������bug, template�ж����T3��T4��������Ч��,����T3��T4�ᱻ��ʽ�ĸĳ�T1��T2,Ҳ�������ظ������bug(�ظ����庯��ģ��)
	//template<class T3,class T4>
	//friend void ShowPerson3(Person<T3, T4> p) {
	//	cout << "ShowPerson3��������" << endl;
	//}


	/*
	����������������ʵ�ֵ���Ԫ����Ҫ����->
	 �����б��뺬�ж�̬�ķ�����, ���ҷ���ֻ������������ṩ�ķ���
	 �Ų������bug, ������Щ��Ԫ����ʱȫ�ֵ�
	*/
	//��һ��д��
	friend void ShowPerson4(Person p) { //�����Person����ʽ�ĳ�Person<T1,T2>
		cout << "name of type is = " << typeid(p.name).name() << endl;
		cout << "name of type is = " << typeid(p.age).name() << endl;
	}
	//�ڶ���д��
	friend void ShowPerson5(Person<T1, T2> p) {
		cout << "name of type is = " << typeid(p.name).name() << endl;
		cout << "name of type is = " << typeid(p.age).name() << endl;
	}
	//������д����������д��Ҳ�п�������bug �������������ηֱ�ΪPerson<A,X>��Person<A,Y> ��ʱͬ��������ظ�������Ԫ
	friend void ShowPerson6(Person<T1, double>p) {
		cout << "name of type is = " << typeid(p.name).name() << endl;
		cout << "name of type is = " << typeid(p.age).name() << endl;
	}


	//�����ĳ�Ա��������Ӱ��
	void Show1(Person<int, int> p) {
		cout << "Show1 ��������" << endl;
	}
	void Show2(double x) {
		cout << "Show2 ��������" << endl;
	}
	template<typename T5, class T6>
	void Show3(T5 x, T6 y) {
		cout << "Show3 ��������" << endl;
	}
};



void BugTest() {
	/*
	��������»���������Ҫ��C++��������bug��
	��������һ��ɨ�赽Person<string, int> ������
	ִ�еڶ��εĶ�̬����, ����ģ����, ��������ռλ��ȫ�����ɾ�������, ����Person<string, double>�࣬��ʱ������Ա��������Ԫ����(������Ԫ�������ᱻȷ��)
	*/
	Person<string, double> p1("�����", 15);
	//ShowPerson3(p1);


	/*
	���ｫ��¶�������, ��������һ��ɨ�赽Person<string, string>
	ִ�еڶ��εĶ�̬����, ����ģ����, ��������ռλ��ȫ�����ɾ�������,, ����Person<string, string>��, ��ʱ������Ա��������Ԫ����
	���Ѿ�ȷ������Ԫ��������һ���Ѿ��������.  ��������ٱ���ᱨ��, ��ʾ�ظ�����

	�������ִ���İ취, ������ǰ��ȷ��������������ʵ�ֵ���Ԫ����ɾȥ,ֻ���²�ȷ���ġ���̬�ĵ���Ԫ����(���ֻ������д��1��2��3)
	������ǣ�Ҫôÿ�α������Ԫ��������ͬ, ���ᱨ��.......Ҫô������������, �ڶ��εĶ�̬���������ִ�У�Ҳ���ᱨ��
	*/
	Person<double, string> p2(16, "�����");
	//ʹ��д��3���ｫ�����bug
	//Person<string, double> p3("�����", 17);


	/*
	�����ǲ��ᱨ���, ��Ϊ���Ǳ������ڶ���ɨ�赽Person<string, double>,����ִ�еڶ��εĶ�̬����... ���ԾͲ��ᷢ���ض�������
	*/
	//Person<string, double> p4("��Ȩ" ,19);


	Person<int, int> p5(1, 2);
	ShowPerson4(p5);
	p1.Show1(p5);
	p5.Show2(5);
	p5.Show3("������", 666);
}

void Test2() {
	Person<string, double> p1("�����", 15);
	ShowPerson2(p1);
}

int main() {
	//������Ԫ��������ʵ��
	BugTest();
	//������Ԫ��������ʵ��
	Test2();
}