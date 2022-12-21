#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
}; //延续C语言风格必须加;号

int main() {
	struct Student students[] =
	{
		{"张三",22,87},
		{"李四",18,79},
		{"王五",40,98},
	};

	for (int i = 0; i < 3; i++)
	{
		Student stu = students[i]; //左式在栈区疯狂开辟空间,每循环一次开辟一次,执行拷贝构造
		cout << "姓名:" << stu.name << ","
			<< "年龄:" << stu.age << ","
			<< "成绩:" << stu.score << endl;
	}
}