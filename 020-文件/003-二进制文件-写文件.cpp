#include <iostream>
#include <fstream>
using namespace std;

class Person {
public:
	char _name[64]; //��Ҫ��C++��string����,���ܻ���bug
	int _age;
};

void BinaryWrite(string* filePath) {
	//��������ͬʱ�ù��캯�����úô򿪷�ʽ
	ofstream ofs(*filePath, ios::out | ios::binary);

	//д������
	Person p = { "����",20 };
	//����ʵ���ĵ�ַ,���ж��
	ofs.write((const char*)&p, sizeof(p)); //������Կ���c++û��byte����,�����ô�Сһ����char��������

	//�ر��ļ���
	ofs.close();

	cout << "д�����!" << endl;
}

int main() {
	string fileName = "person.txt";
	BinaryWrite(&fileName);
}