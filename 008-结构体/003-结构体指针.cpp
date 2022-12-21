#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
} s3;

int main() {
	s3 = { "Lisa",24,98 }; //还能这样玩...
	Student* p = &s3;
	//指针访问实例成员与实例本身访问成员时不同的，采用的是->
	cout << "姓名:" << p->name << "年龄:" << p->age << "成绩:" << p->score << endl;
}