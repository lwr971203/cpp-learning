#include <iostream>
using namespace std;
#include <string>

int main() {
	string str = "hello world";
	//����
	str.insert(1,"333");
	cout << str << endl;

	//��ָ��λ��ɾ�������ַ�
	str.erase(1,3);
	cout << str << endl;
}