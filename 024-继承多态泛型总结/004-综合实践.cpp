#include <iostream>
using namespace std;

//C++û�нӿ�,�ô�������������
class Compareable {
public:
	virtual bool Compare(Compareable&) = 0;
	virtual bool Compare(Compareable*) = 0;
};

class Person :public Compareable {
private:
	string name;
	int age;
	//��1
	bool Compare(Compareable& p) {
		Person& person = (Person&)p;
		if (this->name == person.name && person.age == this->age)
		{
			return true;
		}
		return false;
	}
	//��2
	bool Compare(Compareable* p) {
		Person* person = (Person*)p;
		if (this->name == person->name && person->age == this->age)
		{
			return true;
		}
		return false;
	}
public:
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
};

template<typename T>
bool Compare(T& a, T& b) {
	if (a == b)
	{
		return true;
	}
	return false;;
}

//ģ����廯����
template<> bool Compare(Compareable& a, Compareable& b) {
	if (a.Compare(b))
	{
		return true;
	}
	return false;;
}

//template<> bool Compare(Person& p1, Person& p2) {
//	if (p1.name == p2.name && p1.age == p2.age)
//	{
//		return true;
//	}
//	return false;
//}

int main() {
	//int a = 10;
	//int b = 20;
	//cout << Compare(a, b) << endl;

	Person p1("����", 12);
	Person p2("����", 12);
	//cout << Compare(p1, p2) << endl; //���뷺��,����
	//ָ������Ϊ���࣬����������ȼ�, ûë��
	//cout << Compare<Compareable>(p1, p2) << endl; 
	//���߽�����ʵ��ǿת�ɳ��������ã�����������ȼ�,Ҳûë��
	cout << Compare((Compareable&)p1, (Compareable&)p2) << endl;

	//�Ƹ�·Ҳ��
	//Compareable* com1 = &p1;
	//Compareable* com2 = &p2;
	//cout << Compare(*com1, *com2) << endl;
}