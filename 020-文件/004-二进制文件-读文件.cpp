#include <iostream>
using namespace std;
#include <fstream>
#include <string>

class Person {
public:
	char _name[64];
	int _age;
};

void BinaryRead(string *fileName) {
	//创建文件流
	ifstream ifs(*fileName, ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "打开" << *fileName << "失败" << endl;
		return;
	}

	
	Person p;
	//告诉实例的地址,还有多大
	ifs.read((char*)&p, sizeof(p));
	//Person *p=new Person;
	//ifs.read((char*)p, sizeof(p));

	ifs.close();
	cout << "姓名:" << p._name << ",年龄:" << p._age << endl;
	//cout << "姓名:" << p->_name << ",年龄:" << p->_age << endl;
	//return p;
}

int main() {
	string filePath = "person.txt";
	BinaryRead(&filePath);
	//Person *p = BinaryRead(&filePath);
}