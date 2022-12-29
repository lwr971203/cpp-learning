#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//find�����ǵ�ֵ����

void Test1() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator i=find(v.begin(), v.end(), 5); //����Ҫ��5
	if (i!=v.end())
	{
		cout << "�ҵ���" << endl;
	}
}

class Person {
public:
	string name;
	int age;
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
	//�����Ҫ��find����, ���ײ��õ���== �����������ǵö�Person����==������
	bool operator==(const Person& p) {
		if (this->name == p.name && this->age == p.age)
		{
			return true;
		}
		return false;
	}
};
//�����Զ������������
void Test2() {
	vector<Person> v;
	Person p1 = Person("����",15);
	Person p2 = Person("����",16);
	Person p3 = Person("����",17);
	Person p4 = Person("����",15);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator i=find(v.begin(), v.end(), p3);
	if (i!=v.end())
	{
		cout << "name = " << i->name << ", age = " << i->age << endl;
	}
}

int main() {
	Test1();
	Test2();
}