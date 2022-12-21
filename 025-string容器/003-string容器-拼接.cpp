#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1 = "我";
	str1 += "爱玩游戏";
	cout << str1 << endl;

	str1 += ':';
	cout << str1 << endl;

	string str2 = "LOL DNF";
	str1 += str2;
	cout << str1 << endl;

	string str3 = "I";
	str3.append(" love");
	cout << str3 << endl;	

	str3.append(" game abced",5); //追加前四个
	cout << str3 << endl;	

	str3.append(str2,4,3); //截取第四个索引开始，三个
	cout << str3 << endl;
}