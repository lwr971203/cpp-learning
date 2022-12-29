#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Greater4
{
public:
	bool operator()(int v) {
		if (v > 4)
			return true;
		else
			return false;
	}
};

void Test1() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);

	int num = count_if(v.begin(), v.end(), Greater4());
	cout << "个数为" << num << endl;
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

struct AgeLess35
{
public:
	bool operator()(const Person& p) {
		if (p.age < 35)
		{
			return true;
		}
		return false;
	}
};

//统计自定义数据类型
void Test2() {
	vector<Person> v;

	Person p1("刘备", 35);
	Person p2("关羽", 35);
	Person p3("张飞", 35);
	Person p4("赵云", 30);
	Person p5("曹操", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int num = count_if(v.begin(),v.end(),AgeLess35());
	cout << "年龄小于35岁得有 " << num << " 个" << endl;
}

int main() {
	Test1();
	Test2();
}