#include <iostream>
using namespace std;	

int main() {
	int score = 0;
	cout << "请输入一个分数" << endl;
	cin >> score;

	cout << "您输入的分数为" << score << endl;

	if (score>=600)
	{
		if (score>=700)
		{
			cout << "您能考入北京大学" << endl;
		}
		else if (score >= 650)
		{
			cout << "您能考入清华大学" << endl;
		}
		else
		{
			cout << "您能考入人民大学" << endl;
		}
	}
	else if (score >= 500)
	{
		cout << "您能考入二本大学" << endl;
	}
	else if (score>=400)
	{
		cout << "您能考入三本大学" << endl;
	}
	else
	{
		cout << "您未能考入本科" << endl;
	}
}