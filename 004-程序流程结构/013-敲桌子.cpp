#include <iostream>
using namespace std;

int main() {
	//��Ϸ���򣺶���0~99�����֣����Ϊ7�ı������߸�λ����7����ʮλ������7��������

	for (int i = 0; i < 100; i++)
	{
		if ((i % 7 == 0 || i % 10 == 7 || i / 10 == 7 )&& i != 0)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
}