#include <iostream>
using namespace std;
#include <string>

template<class NameType,class AgeType = int> //类模板可以有默认类型参数
class Person {
public:
	NameType _name;
	AgeType _age;
	Person(NameType name,AgeType age) {
		this->_name = name;
		this->_age = age;
	}

	void Show(){
		cout << "name=" << this->_name << ",age=" << this->_age << endl;
	}
};

int main() {
	//类模板没有自动类型推导
	//Person p1("孙悟空",100); //错误
	Person<string, int> p1("孙悟空",100);
	p1.Show();

	Person<string> p2("猪八戒",20);
	p2.Show();
}