#include <iostream>
using namespace std;

int main(){
	//换行
	cout << "Hello World!\n";

	//制表符\t C++中制表符会考虑前面的字符串，总共长度位8个字符
	cout << "aaa\tHello" << endl;
	cout << "aaaa\tHello" << endl;
	cout << "aa\tHello" << endl;

	//转移反斜杠
	cout << "反斜杠=" << "\\" <<endl;
}