#include <iostream>
using namespace std;

//C++没有接口,用纯抽象类来代替
class Compareable {
public:
	virtual bool Compare(Compareable&) = 0;
	virtual bool Compare(Compareable*) = 0;
};

class Person :public Compareable {
private:
	string name;
	int age;
	//法1
	bool Compare(Compareable& p) {
		Person& person = (Person&)p;
		if (this->name == person.name && person.age == this->age)
		{
			return true;
		}
		return false;
	}
	//法2
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

//模板具体化重载
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

	Person p1("杨逍", 12);
	Person p2("杨逍", 12);
	//cout << Compare(p1, p2) << endl; //跳入泛型,报错
	//指定泛型为父类，提高重载优先级, 没毛病
	//cout << Compare<Compareable>(p1, p2) << endl; 
	//或者将子类实例强转成抽象类引用，提高重载优先级,也没毛病
	cout << Compare((Compareable&)p1, (Compareable&)p2) << endl;

	//绕个路也行
	//Compareable* com1 = &p1;
	//Compareable* com2 = &p2;
	//cout << Compare(*com1, *com2) << endl;
}