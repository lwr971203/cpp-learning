#include <iostream>
using namespace std;

int main() {
	int score = 0;
	cout << "������һ������" << endl;
	cin >> score;

	cout << "������ķ���Ϊ" << score << endl;

	if (score>=600)
	{
		cout << "��ϲ������һ����ѧ" << endl;
	}
	else
	{
		cout << "���ź�����Ϊδ����һ����ѧ" << endl;
	}
}