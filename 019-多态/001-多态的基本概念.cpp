#include <iostream>
using namespace std;

//��������Ϊ����,���ú���ʱ����ʵ�ʵ�������д��ʵ�ֵĺ���,��ͽж�̬  (ע:��ֻ̬��ʵ����������,��̬����û�ж�̬����) 
//��̬��Ҫ��
//�̳й�ϵ��������д������麯���������ø������(ָ���������)���ջ���˵ָ����������ʵ����ִ�������ʵ���������д����

class Animal {
public:
	virtual void Say() {
		cout << "�����ڽ�" << endl;
	}
	//����������Ϊ�麯����������������һ���麯��ָ��(vfptr)��ָ��һ��������ַ��(vtable)
	//������̳�ʱ���̳����麯��ָ��(��sizeof����һ��,�������ȷʵ��һ��ָ��Ĵ�С)��������д�����������ʱ���麯��ָ��ָ�����Ѿ���д�ĺ�����ַ���γɶ�̬��Ϊ

	//��δ����������Ϊ�麯���������ཫֱ�Ӽ̳������������������д��ͬ�����������������и���ͬ������������������
	//��ʱ�������麯��ָ�룬�ø������ָ�����ʵ��(�п���������ʵ��)ʱ��ֻ����ø���ʵ�ֵĺ������������ڶ�̬��Ϊ
};
class Cat :public Animal {
	//C++�Դ�����˽����д�鷽�����൱��C#�е���ʽ�ӿ�ʵ��,����һ��ǿ�ƶ�̬,�����׵Ķ�̬
	void Say() { //C++����д�鷽�����ü�override,C#��Ҫ,�������������
		cout << "Сè�ڽ�" << endl;
	}
};
class Dog :public Animal {
	void Say() { //��д���뷽��ǩ��һ���ҷ���ֵһ��
		cout << "С���ڽ�" << endl;
	}
};

void ExecuteSay(Animal& animal) {
	animal.Say(); //�ǿ��Է��ʵ�˽�е���д������
}

int main() {
	Animal animal;
	ExecuteSay(animal);
	Cat cat;
	//cat.Say(); //˽��
	ExecuteSay(cat);
	Dog dog;
	ExecuteSay(dog);

	cout << "animal size is " << sizeof animal << endl; //8 �麯��ָ���С
	cout << "cat size is " << sizeof  cat << endl; //8
	cout << "dog size is " << sizeof  dog << endl; //8
}