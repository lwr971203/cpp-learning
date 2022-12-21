#include <iostream>
using namespace std;

int main() {
	//游戏规则：对于0~99的数字，如果为7的倍数或者个位数有7或者十位数字有7则敲桌子

	for (int i = 0; i < 100; i++)
	{
		if ((i % 7 == 0 || i % 10 == 7 || i / 10 == 7 )&& i != 0)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
}