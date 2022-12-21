#include <iostream>
using namespace std;
#include <string>

//�����������ָ���ֶε���Ҫ��������
class Animal {
public:
	Animal() {
		cout << "Animal�Ĺ��캯������" << endl;
	}
	virtual void Say() = 0;
	/*~Animal() {
		cout << "Animal��������������" << endl;
	}*/

	//�Ѹ����������������Ϊ������
	//ʹ�����ͷŸ���ָ���������ʱ�������ȵ�����������������Ȼ���ӵĵ��ø����������
	/*virtual ~Animal() {
		cout << "Animal��������������" << endl;
	}*/

	//Ҳ���Խ�����������Ϊһ��������������ʱ����ͱ����һ�������࣬�޷�ʵ��������
	virtual ~Animal() = 0; //Ҫ������������Ҫ��ʵ�֣���Ϊ����Ҳ�п��ܿ��ٶѿռ䣬�ҿ����������޷��ͷŸɾ�
};
Animal::~Animal() {
	cout << "Animal��������������" << endl;
}

class Cat :public Animal {
private:
	string* _name;
	void Say() {
		cout << *_name << "Сè�ڽ�" << endl;
	}
public:
	Cat(string name) {
		_name = new string(name);
		cout << "Cat�Ĺ��캯������" << endl;
	}
	~Cat() {
		cout << "Cat��������������" << endl;
		if (_name != NULL)
		{
			delete _name;
			_name = NULL;
		}
	}
};

int main() {
	Animal* p = new Cat("�ŷ�");
	p->Say();
	//���ø����ָ��ֱ���ͷŶ����е��������ʱ��Ĭ�ϲ��������������������������ֻ����ø������������
	//��ʱ������ڴ�й¶
	delete p;
}