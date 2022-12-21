#include <iostream>
using namespace std;

int main() {
	int score = 0;
	cout << "请输入一个分数" << endl;
	cin >> score;

	cout << "您输入的分数为" << score << endl;

	if (score>=600)
	{
		cout << "恭喜您考入一本大学" << endl;
	}
	else if (score >= 500)
	{
		cout << "恭喜您考入二本大学" << endl;
	}
	else if (score >= 400)
	{
		cout << "恭喜您考入三本大学" << endl;
	}
	else
	{
		cout << "您未考入本科，请再接再厉" << endl;
	}
}