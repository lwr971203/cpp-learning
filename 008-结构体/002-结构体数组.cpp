#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
}; //����C���Է������;��

int main() {
	struct Student students[] =
	{
		{"����",22,87},
		{"����",18,79},
		{"����",40,98},
	};

	for (int i = 0; i < 3; i++)
	{
		Student stu = students[i]; //��ʽ��ջ����񿪱ٿռ�,ÿѭ��һ�ο���һ��,ִ�п�������
		cout << "����:" << stu.name << ","
			<< "����:" << stu.age << ","
			<< "�ɼ�:" << stu.score << endl;
	}
}