#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1 = "��";
	str1 += "������Ϸ";
	cout << str1 << endl;

	str1 += ':';
	cout << str1 << endl;

	string str2 = "LOL DNF";
	str1 += str2;
	cout << str1 << endl;

	string str3 = "I";
	str3.append(" love");
	cout << str3 << endl;	

	str3.append(" game abced",5); //׷��ǰ�ĸ�
	cout << str3 << endl;	

	str3.append(str2,4,3); //��ȡ���ĸ�������ʼ������
	cout << str3 << endl;
}