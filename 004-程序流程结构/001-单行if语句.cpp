#include <iostream>
using namespace std;

int main() {
	int score = 0;
	cout << "请输入一个分数" << endl;
	cin >> score;

	cout << "您输入的分数为:" << score << endl;

	if (score>=600)
	{
		cout << "恭喜您考入了一本大学" << endl;
	}
}