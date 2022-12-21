#include <iostream>
using namespace std;

int main(){
	int score = 0;
	cout << "请输入一个电影评分" << endl;
	cin >> score;

	cout << "您输入的电影评分为:" << endl;
	switch (score)
	{
	case 10:
		cout << "您认为这是一个优质电影";
		break;
	case 9:
		cout << "您认为这是一个经典电影";
		break;
	case 8:
	case 7:
		cout << "您认为这个电影非常不错";
		break;
	case 6:
		cout << "您认为这个电影一般";
		break;
	case 5:
		cout << "您认为这个电影不太行";
		break;
	default:
		cout << "您认为这是部烂片";
		break;
	}
}