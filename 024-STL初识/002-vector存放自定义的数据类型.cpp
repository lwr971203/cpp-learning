#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Person {
public:
	string _name;
	int _age;
	Person(string name, int age) {
		this->_name = name;
		this->_age = age;
	}
};

void Test1() {
	vector<Person> myVector1;
	Person p1("����", 12);
	Person p2("����", 13);
	Person p3("����", 14);
	Person p4("����", 15);
	Person p5("����", 16);
	myVector1.push_back(p1);
	myVector1.push_back(p2);
	myVector1.push_back(p3);
	myVector1.push_back(p4);
	myVector1.push_back(p5);

	for (vector<Person>::iterator it = myVector1.begin(); it != myVector1.end(); it++)
	{
		//cout << "����:" << it->_name << ",����:" << it->_age << endl;
		cout << "����:" << (*it)._name << ",����:" << (*it)._age << endl;
	}
}

void Test2(){
	vector<Person*> myVector2;
	Person p1("����", 12);
	Person p2("����", 13);
	Person p3("����", 14);
	Person p4("����", 15);
	Person p5("����", 16);
	myVector2.push_back(&p1);
	myVector2.push_back(&p2);
	myVector2.push_back(&p3);
	myVector2.push_back(&p4);
	myVector2.push_back(&p5);

	for (vector<Person*>::iterator it = myVector2.begin(); it != myVector2.end(); it++)
	{
		cout << (*it)->_name << "," << (*it)->_age << endl;
	}
}

int main() {
	//Test1();

	Test2();
}