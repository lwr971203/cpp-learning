#include <iostream>
using namespace std;
#include <ctime>

void main() {
	//需要真随机数，需要用时间提供一个种子。不讲道理
	srand((unsigned int)time(NULL)); //需要一个ctime头文件
	//rand()%100表示0~100的伪随机数
	int randNum = rand() % 100 + 1;

	cout << "请输入你猜的数字" << endl;
	int num = 0;
	while (true)
	{	
		cin >> num;
		if (num == randNum) {
			cout << "恭喜您猜对了,随机数为:" << randNum << endl;
		}
		else if (num>randNum)
		{
			cout << "猜大了" << endl;
		}
		else
		{
			cout << "猜小了" << endl;
		}
	}
}