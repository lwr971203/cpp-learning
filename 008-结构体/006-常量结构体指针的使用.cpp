#include <iostream>
#include <string>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

void PrintStudent(const Student* student) {
	//student->age = 500; //常量指针的成员变量也无法写入!
	cout << "姓名:" << student->name << " 年龄:" << student->age << " 成绩:" << student->score << endl;
}

int main() {
	Student student = { "lwr",23,95 };
	PrintStudent(&student);
}