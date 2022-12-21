#include <iostream>
using namespace std;
#include <string>

int main() {
	int scores[3][3] = { {100,100,100},{58,79,90},{45,98,79} };
	string students[] = {"张三","李四","王五"};
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
		}
		cout << students[i] << "的成绩总和为:" << sum << endl;
	}
}