#include <iostream>
#include <string>
#include <ctime>
#include "007-结构体案例1.h"
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

void InitTeachers(Teacher teachers[], int length) { //C++数组还是可以直接写成形参的
	string namesSeed = "ABCDE";
	for (int i = 0; i < length; i++)
	{
		teachers[i].name = "Teacher_";
		teachers[i].name += namesSeed[i];
		for (int j = 0; j < 5; j++)
		{
			teachers[i].students[j].name = "Student_";
			teachers[i].students[j].name += namesSeed[j];  //C++支持与C#语法一样的字符串索引(字符串视为字符数组)
			teachers[i].students[j].score = rand() % 61 + 40;
		}
	}
}

void PrintInfo(Teacher teachers[],int length) {
	for (int i = 0; i < length; i++)
	{
		cout << "教师姓名:" << teachers[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名:" << teachers[i].students[j].name << " 学生成绩:" << teachers[i].students[j].score << endl;
		}
	}
}

int main() {
	srand((unsigned int)time(NULL));
	Teacher teachers[3];
	InitTeachers(teachers, sizeof(teachers) / sizeof(teachers[0]));
	PrintInfo(teachers, sizeof(teachers) / sizeof(teachers[0]));
}