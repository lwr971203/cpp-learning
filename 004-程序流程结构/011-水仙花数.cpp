#include <iostream>
using namespace std;	

int main() {
	int num = 100;
	do
	{
		int bai = num / 100;
		int shi = num % 100 / 10;
		int ge = num % 10;

		int sum = bai * bai*bai+shi * shi*shi + ge * ge*ge;
		if (sum == num)
		{
			cout << num << endl;
		}
		num++;
	} while (num<1000);
}