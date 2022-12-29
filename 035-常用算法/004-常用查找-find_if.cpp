#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Geater5
{
public:
	bool operator()(int v) {
		return v > 5;
	}
};

void Test1() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator i=find_if(v.begin(),v.end(),Geater5());
	if (i != v.end())
	{
		cout << "找到了" << endl;
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
};

template<class T>
class Nameis
{
private:
	string name;
public:
	bool operator()(T& p) {
		if (p.name == this->name)
			return true;
		else
			return false;
	}
	Nameis(string name) {
		this->name = name;
	}
};
//查找自定义数据类型
void Test2() {
	vector<Person> v;
	Person p1 = Person("张三", 15);
	Person p2 = Person("李四", 16);
	Person p3 = Person("王五", 17);
	Person p4 = Person("赵六", 15);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator i=find_if(v.begin(),v.end(),Nameis<Person>("王五"));
	if (i != v.end())
	{
		cout << "name = " << i->name << ", age = " << i->age;
	}
}

int main() {
	Test1();
	Test2();
}