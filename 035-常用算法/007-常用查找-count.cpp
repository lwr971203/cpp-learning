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

	cout << "4的个数为： " << num << endl;
}


class Person {
public:
	string name;
	int age;
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
	//统计得时候是底层用得==所以需要重载
	bool operator==(const Person& p) {
		if (this->age == p.age)
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

	Person p("诸葛亮", 35);

	int num = count(v.begin(), v.end(), p);
	cout << "一共有: " << num << " 个与诸葛亮年龄一样得人" << endl;

}

int main() {
	Test1();
	Test2();
}