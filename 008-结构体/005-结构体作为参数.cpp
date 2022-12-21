#include <iostream>
#include <string>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

void ChangeAge1(Student student) { //简单值传递,进行形参对实参的拷贝
	student.age = 100;
	cout << "ChangeAge1函数中姓名:" << student.name << " 年龄:" << student.age << " 成绩:" << student.score << endl;
}

void ChangeAge2(Student* student) {//地址传递,形参指针指向实参实例
	student->age = 100;
	cout << "ChangeAge2函数中姓名:" << student->name << " 年龄:" << student->age << " 成绩:" << student->score << endl;
}

int main() {
	Student student;
	student.name = "张三";
	student.age = 12;
	student.score = 65;

	cout << "main函数中姓名:" << student.name << " 年龄:" << student.age << " 成绩:" << student.score << endl;
	ChangeAge1(student);
	cout << "main函数中姓名:" << student.name << " 年龄:" << student.age << " 成绩:" << student.score << endl;
	ChangeAge2(&student);
	cout << "main函数中姓名:" << student.name << " 年龄:" << student.age << " 成绩:" << student.score << endl;
}