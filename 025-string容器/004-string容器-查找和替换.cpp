#include <iostream>
using namespace std;
#include <string>

void Test1() {
	string str = "Hellor World";
	int index = str.find("or"); //���������ҵ�һ��
	cout << index << endl;

	index = str.rfind("or"); //���������ҵ�һ�������صĻ��Ǵ������Ҽ��������
	cout << index << endl;
}

void Test2() {
	string str = "Hello World";
	str.replace(6,5,"���ϰ�"); //�ӵڼ��������滻�����ַ�
	cout << str << endl;
}

int main() {
	Test1();

	Test2();
}