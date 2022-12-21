#include "MyArray.hpp"
#include <string>
using namespace std;

class Person {
public:
	string _name;
	int _age;
	Person(){} //需要给一个无参构造，不然数组调用默认无参构造开辟空间
	Person(string name,int age) {
		this->_name = name;
		this->_age = age;	
	}
	void Show() {
		cout << "姓名:" << this->_name << ",年龄:" << this->_age << endl;
	}
};

int main() {
	Person p1("韩信",40);
	Person p2("安琪拉",32);
	Person p3("鲁班七号",25);
	Person p4("孙尚香",24);
	Person p5("赵云",35);

	MyArray<Person> arr(5);
	cout << "空间大小:"<<arr.GetCapacity()<< endl;
	cout << "数组长度:" << arr.GetLength() << endl;
	arr.InsertEnd(p1);
	arr.InsertEnd(p2);
	arr.InsertEnd(p3);
	arr.InsertEnd(p4);
	arr.InsertEnd(p5);
	cout << "空间大小:" << arr.GetCapacity() << endl;
	cout << "数组长度:" << arr.GetLength() << endl;
	
	arr.DeleteEnd();
	cout << "空间大小:" << arr.GetCapacity() << endl;
	cout << "数组长度:" << arr.GetLength() << endl;

	arr[2].Show();
	arr[3] = arr[0];
	arr[3].Show();
}
