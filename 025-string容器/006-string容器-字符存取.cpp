#include <iostream>
using namespace std;
#include <string>

int main() {
	string str = "Hello World";
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i)<<" ";
	}
	cout << endl;

	str[0] = 'x';
	cout << str << endl;

	str.at(0)='A';
	cout << str << endl;
}