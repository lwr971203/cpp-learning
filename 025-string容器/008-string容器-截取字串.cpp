#include <iostream>
#include <string>
using namespace std;

int main() {
	string email = "1347006729@qq.com";
	int index = email.find("@");
	string account = email.substr(0,index);
	cout << account << endl;
}