#include <iostream>
using namespace std;
#include <string>

/*
- string& operator=(const char* s);             //char*�����ַ��� ��ֵ����ǰ���ַ���
- string& operator=(const string &s);         //���ַ���s������ǰ���ַ���
- string& operator=(char c);                          //�ַ���ֵ����ǰ���ַ���
- string& assign(const char *s);                  //���ַ���s������ǰ���ַ���
- string& assign(const char *s, int n);     //���ַ���s��ǰn���ַ�������ǰ���ַ���
- string& assign(const string &s);              //���ַ���s������ǰ�ַ���
- string& assign(int n, char c);                  //��n���ַ�c������ǰ�ַ���
*/
int main() {
	string str1;
	str1 = "Hello World"; //C/C++��˫���ŵ��ַ�����char *    ���ﱾ�����ǵ����˿�������(����operator=)
	cout << "str1=" << str1 << endl;

	string str2;
	str2 = str1; //���ﱾ�����ǵ����˿�������(����operator=)
	cout << "str2=" << str2 << endl;

	string str3 ;
	str3 = 'a';
	cout << "str3=" << str3 << endl;

	string str4;
	str4.assign("Hello C++");
	cout << str4 << endl;	

	string str5;
	str5.assign("Hello C++",5); //��ֵǰ���
	cout << "str5=" << str5 << endl;

	string str6;
	str6.assign(str5);
	cout << "str6=" << str6 << endl;

	string str7;
	str7.assign(10,'w');
	cout << "str7=" << str7 << endl;	
}