#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//find查找是等值查找

void Test1() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator i=find(v.begin(), v.end(), 5); //我需要找5
	if (i!=v.end())
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
	//如果需要用find查找, 它底层用的是== 所以这里我们得对Person重载==操作符
	bool operator==(const Person& p) {
		if (this->name == p.name && this->age == p.age)
		{
			return true;
		}
		return false;
	}
};
//查找自定义的数据类型
void Test2() {
	vector<Person> v;
	Person p1 = Person("张三",15);
	Person p2 = Person("李四",16);
	Person p3 = Person("王五",17);
	Person p4 = Person("赵六",15);
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