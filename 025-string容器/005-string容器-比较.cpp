#include <iostream>
using namespace std;
#include <string>

void Test1() {
	string str1 = "hello";
	string str2 = "xello"; //C++�е��ַ����Ƚ���ֱ�ӱȽ�ֵ

	if (str1== str2)
	{
		cout << "str1 == str2" << endl;
	}
	else if (str1>str2)
	{
		cout << "str1 > str2" << endl;
	}
	else
	{
		cout << "str1 < str2" << endl;
	}
}

int main() {
	Test1();
}