#include <iostream>
using namespace std;	

int main() {
	int score = 0;
	cout << "������һ������" << endl;
	cin >> score;

	cout << "������ķ���Ϊ" << score << endl;

	if (score>=600)
	{
		if (score>=700)
		{
			cout << "���ܿ��뱱����ѧ" << endl;
		}
		else if (score >= 650)
		{
			cout << "���ܿ����廪��ѧ" << endl;
		}
		else
		{
			cout << "���ܿ��������ѧ" << endl;
		}
	}
	else if (score >= 500)
	{
		cout << "���ܿ��������ѧ" << endl;
	}
	else if (score>=400)
	{
		cout << "���ܿ���������ѧ" << endl;
	}
	else
	{
		cout << "��δ�ܿ��뱾��" << endl;
	}
}