#include "MyArray.hpp"
#include <string>
using namespace std;

class Person {
public:
	string _name;
	int _age;
	Person(){} //��Ҫ��һ���޲ι��죬��Ȼ�������Ĭ���޲ι��쿪�ٿռ�
	Person(string name,int age) {
		this->_name = name;
		this->_age = age;	
	}
	void Show() {
		cout << "����:" << this->_name << ",����:" << this->_age << endl;
	}
};

int main() {
	Person p1("����",40);
	Person p2("������",32);
	Person p3("³���ߺ�",25);
	Person p4("������",24);
	Person p5("����",35);

	MyArray<Person> arr(5);
	cout << "�ռ��С:"<<arr.GetCapacity()<< endl;
	cout << "���鳤��:" << arr.GetLength() << endl;
	arr.InsertEnd(p1);
	arr.InsertEnd(p2);
	arr.InsertEnd(p3);
	arr.InsertEnd(p4);
	arr.InsertEnd(p5);
	cout << "�ռ��С:" << arr.GetCapacity() << endl;
	cout << "���鳤��:" << arr.GetLength() << endl;
	
	arr.DeleteEnd();
	cout << "�ռ��С:" << arr.GetCapacity() << endl;
	cout << "���鳤��:" << arr.GetLength() << endl;

	arr[2].Show();
	arr[3] = arr[0];
	arr[3].Show();
}
