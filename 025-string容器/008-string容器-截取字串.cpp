#include <iostream>
#include <string>
using namespace std;

//string substr(int pos = 0, int n = npos) const;`   //������pos��ʼ��n���ַ���ɵ��ַ���
int main() {
	string email = "1347006729@qq.com";
	int index = email.find("@");
	string account = email.substr(0,index); //ע������ڶ��������Ǹ���
	cout << account << endl;
}