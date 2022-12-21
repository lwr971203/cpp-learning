#include <iostream>
#include <string>
#include <ctime>
#include "007-�ṹ�尸��1.h"
using namespace std;

struct Student
{
	string name;
	int score;
};

struct Teacher
{
	string name;
	Student students[5];
};

void InitTeachers(Teacher teachers[], int length) { //C++���黹�ǿ���ֱ��д���βε�
	string namesSeed = "ABCDE";
	for (int i = 0; i < length; i++)
	{
		teachers[i].name = "Teacher_";
		teachers[i].name += namesSeed[i];
		for (int j = 0; j < 5; j++)
		{
			teachers[i].students[j].name = "Student_";
			teachers[i].students[j].name += namesSeed[j];  //C++֧����C#�﷨һ�����ַ�������(�ַ�����Ϊ�ַ�����)
			teachers[i].students[j].score = rand() % 61 + 40;
		}
	}
}

void PrintInfo(Teacher teachers[],int length) {
	for (int i = 0; i < length; i++)
	{
		cout << "��ʦ����:" << teachers[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ������:" << teachers[i].students[j].name << " ѧ���ɼ�:" << teachers[i].students[j].score << endl;
		}
	}
}

int main() {
	srand((unsigned int)time(NULL));
	Teacher teachers[3];
	InitTeachers(teachers, sizeof(teachers) / sizeof(teachers[0]));
	PrintInfo(teachers, sizeof(teachers) / sizeof(teachers[0]));
}