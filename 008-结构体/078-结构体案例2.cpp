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
		cout << "ÐÕÃû:" << hero.name << " ÄêÁä:" << hero.age << " ÐÕÃû:" << hero.gender << endl;
	}
}

int main() {
	Hero heros[] =
	{
		{"Áõ±¸",45,"male"},{"¹ØÓð",36,"male"},{"õõ²õ",22,"female"},{"ÕÔÔÆ",19,"male"}
	};
	int len = sizeof(heros) / sizeof(heros[0]);

	cout << "ÅÅÐòÇ°" << endl;
	PrintInfo(heros, len);
	SortArrayWithAge(heros, len);
	cout << "ÅÅÐòºó" << endl;
	PrintInfo(heros,len);
}