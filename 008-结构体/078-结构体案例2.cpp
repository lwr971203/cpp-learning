#include <iostream>
#include <string>
using namespace std;

struct Hero
{
	string name;
	int age;
	string gender;
};

void SortArrayWithAge(Hero heros[], int len) {
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (heros[j].age > heros[j + 1].age)
			{
				Hero tempHero = heros[j];
				heros[j] = heros[j + 1];
				heros[j + 1] = tempHero;
			}
		}
	}
}

void PrintInfo(Hero heros[], int len) {
	for (int i = 0; i < len; i++)
	{
		Hero hero = heros[i];
		cout << "����:" << hero.name << " ����:" << hero.age << " ����:" << hero.gender << endl;
	}
}

int main() {
	Hero heros[] =
	{
		{"����",45,"male"},{"����",36,"male"},{"����",22,"female"},{"����",19,"male"}
	};
	int len = sizeof(heros) / sizeof(heros[0]);

	cout << "����ǰ" << endl;
	PrintInfo(heros, len);
	SortArrayWithAge(heros, len);
	cout << "�����" << endl;
	PrintInfo(heros,len);
}