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
	else if (score >= 500)
	{
		cout << "��ϲ�����������ѧ" << endl;
	}
	else if (score >= 400)
	{
		cout << "��ϲ������������ѧ" << endl;
	}
	else
	{
		cout << "��δ���뱾�ƣ����ٽ�����" << endl;
	}
}