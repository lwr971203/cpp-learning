#include <iostream>
using namespace std;

int main(){
	int score = 0;
	cout << "������һ����Ӱ����" << endl;
	cin >> score;

	cout << "������ĵ�Ӱ����Ϊ:" << endl;
	switch (score)
	{
	case 10:
		cout << "����Ϊ����һ�����ʵ�Ӱ";
		break;
	case 9:
		cout << "����Ϊ����һ�������Ӱ";
		break;
	case 8:
	case 7:
		cout << "����Ϊ�����Ӱ�ǳ�����";
		break;
	case 6:
		cout << "����Ϊ�����Ӱһ��";
		break;
	case 5:
		cout << "����Ϊ�����Ӱ��̫��";
		break;
	default:
		cout << "����Ϊ���ǲ���Ƭ";
		break;
	}
}