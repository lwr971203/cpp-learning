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
	//�����ļ���
	ifstream ifs(*fileName, ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "��" << *fileName << "ʧ��" << endl;
		return;
	}

	
	Person p;
	//����ʵ���ĵ�ַ,���ж��
	ifs.read((char*)&p, sizeof(p));
	//Person *p=new Person;
	//ifs.read((char*)p, sizeof(p));

	ifs.close();
	cout << "����:" << p._name << ",����:" << p._age << endl;
	//cout << "����:" << p->_name << ",����:" << p->_age << endl;
	//return p;
}

int main() {
	string filePath = "person.txt";
	BinaryRead(&filePath);
	//Person *p = BinaryRead(&filePath);
}