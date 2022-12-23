#include <iostream>
using namespace std;

class Person1 {
public:
	void Show1() {
		cout << "Person1" << endl;
	}
};

class Person2 {
public:
	void Show2() {
		cout << "Person2" << endl;
	}
};

template<typename T1, typename T2>
class MyClass {
public:
	//T1 obj = 3; //����T1��3���������Ͳ��ԣ��ᱻ�ڶ��εĶ�̬�����鵽
	T1 obj;
	void ShowPerson1() {
		//������C++�е���ɫ�����˷���֮���������������ᱻ���ã��򲻻ᱻ����
		//���������ʱ֧������"Ԥдʽ���" ����һ�����ܵ�����ʱ�ļ�飨������ڴ����б������ˣ�
		obj.Show1();
		//a.helloworla1 //(����д�϶��ᱻ��һ�εľ�̬�����鵽)
	}
	void ShowPerson2() {
		obj.Show2();
	}

	/*
	����һϵ�еĵ���֮���ҵó�����Ĳ²�,����C++�ı������ڱ���ʱ����Ϊ
	���ڷ�����������α���Ĺ���.
	������ɨ���귺����Ķ�����
	ִ�е�һ�εľ�̬���룺ֱ��ִ�б����������﷨���, �����ǲ���飨����˵����д��
	������ǽ�����ȫ�����ռλ�������MyClass��ģ����, ��������޷�ʵ������, ֻ��Ϊ�ڶ��ζ�̬�����ṩһ��ģ�� ....������ʽΪ
	template<typename `, typename `>
	class MyClass{
	public :
		�F obj
		void ShowPerson1( �F arg){
				obj.Show1();
		}
		void ShowPerson2( �F arg){
				obj.Show2();
		}
	}
	*/
};

int main() {
	/*
	�������廯�ķ���������
	ִ�еڶ��εĶ�̬����: �ٸ���ģ����, Ȼ�����з���ռλ�����廯 �� ����Ա��������Ҫ�����ͼ�飩������ʵ�ֵ���Ԫ�������룬����Ա������ʱ�����������
										Ȼ���������MyClass<Person1, double>
	template<typename Person1, typename double>
	class MyClass{
	public :
		Person1 obj
		void ShowPerson1( Person1 arg){
				obj.Show1();
		}
		void ShowPerson2( Person1 arg){
				obj.Show2();
		}
	}
	*/
	MyClass<Person1, double> p1;
	/*
	����MyClass<Person1, double>�ĳ�Ա��������
	ִ�еڶ��εĶ�̬����: ��MyClass<Person1, double>�еĳ�Ա����void ShowPerson1() ��������
	*/
	p1.ShowPerson1();
	/*
	ͬ����
	ִ�еڶ��εĶ�̬����: ��MyClass<Person1, double>�еĳ�Ա����void ShowPerson2() ��������
	*/
	p1.ShowPerson2();

	//����������������й��̶��Ƿ����ڱ���ʱ��, �����Ǵ������£�C/C++���ԣ���ʱ��˳��
	//����ֻ��˵վ�ڱ���ĽǶȣ�������ıȳ�������� "��̬" һ��
}