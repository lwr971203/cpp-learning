#include <iostream>
using namespace std;
#include <string>

int main() {
	string s1; //Ĭ�Ϲ���

	const char *s = "Hello World";
	string s2(s);
	cout << "s2=" << s2 << endl;

	string s3(s2); //��������
	cout << "s3=" << s3 << endl;

	string s4(10,'a');
	cout <<"s4="<< s4 << endl;

	string s5 = "ni hao"; //��C++������,����Ӧ������ʽ�����˹��캯��
}