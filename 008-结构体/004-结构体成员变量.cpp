#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

struct Teacher {
	int id;
	string name;
	int age;
	Student student;
};

int main() {
	Teacher teacher =
	{
		35,"Liuguohao",40,
	{"lwr",23,100}
	}; //结构体赋值跟 json 可以说非常相似了

	cout << "教师工号:" << teacher.id << " 教师姓名:" << teacher.name << " 教师年龄:" << teacher.age
		<< "\n教师辅导的学生姓名:" << teacher.student.name << " 学生年龄:" << teacher.student.age << " 学生成绩:" << teacher.student.score << endl;
}