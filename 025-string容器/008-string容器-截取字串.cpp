#include <iostream>
#include <string>
using namespace std;

//string substr(int pos = 0, int n = npos) const;`   //返回由pos开始的n个字符组成的字符串
int main() {
	string email = "1347006729@qq.com";
	int index = email.find("@");
	string account = email.substr(0,index); //注意这里第二个参数是个数
	cout << account << endl;
}