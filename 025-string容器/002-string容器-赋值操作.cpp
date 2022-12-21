#include <iostream>
using namespace std;
#include <string>

int main() {
	string str1;
	str1 = "Hello World"; //C/C++中双引号的字符串是char *
	cout << "str1=" << str1 << endl;

	string str2;
	str2 = str1;
	cout << "str2=" << str2 << endl;

	string str3 ;
	str3 = 'a';
	cout << "str3=" << str3 << endl;

	string str4;
	str4.assign("Hello C++");
	cout << str4 << endl;	

	string str5;
	str5.assign("Hello C++",5); //赋值前五个
	cout << "str5=" << str5 << endl;

	string str6;
	str6.assign(str5);
	cout << "str6=" << str6 << endl;

	string str7;
	str7.assign(10,'w');
	cout << "str7=" << str7 << endl;	
}