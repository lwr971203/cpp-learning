#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void Test1() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);

	int num = count(v.begin(), v.end(), 4);

	cout << "4�ĸ���Ϊ�� " << num << endl;
}


class Person {
public:
	string name;
	int age;
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
	//ͳ�Ƶ�ʱ���ǵײ��õ�==������Ҫ����
	bool operator==(const Person& p) {
		if (this->age == p.age)
		{
			return true;
		}
		return false;
	}
};
//ͳ���Զ�����������
void Test2() {
	vector<Person> v;

	Person p1("����", 35);
	Person p2("����", 35);
	Person p3("�ŷ�", 35);
	Person p4("����", 30);
	Person p5("�ܲ�", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person p("�����", 35);

	int num = count(v.begin(), v.end(), p);
	cout << "һ����: " << num << " �������������һ������" << endl;

}

int main() {
	Test1();
	Test2();
}