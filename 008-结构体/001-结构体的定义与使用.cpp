#include <iostream>
using namespace std;
#include <string>
struct Student
{
	string name; //�õ���string,�������string��ͷ�ļ�
	int age;
	int score;
} s3; //�ṹ���������ʱ�򴴽�����

int main() {
	//��һ�ִ����ṹ��ķ�ʽ,struct�ؼ��ֿ�ʡ�ԣ���������C�����Ż��Ŀ���)
	struct Student s1; //C++��������������ʵ��
	s1.name = "lwr"; //C++������ĳ�Ա���ʷ����ֵ�Ҳ���е����,��ʵ��������ʳ�Ա��ʱ��,�õ�. ��ָ�����ʵ����Ա��ʱ����->
	s1.age = 22;
	s1.score = 100;
	cout << "s1.name:" << s1.name << ",s1.age:" << s1.age << ",s1.score:" << s1.score << endl;

	//�ڶ��֣���ʼ����
	Student s2 = {"xjp",22,98}; //��ָ��������. ֻ�ܰ���˳��ֵ
	cout << "s2.name:" << s2.name << ",s2.age:" << s2.age << ",s2.score:" << s2.score << endl;
	//֧�ֲ���˳���.�ֶ���=ֵ��ʼ��,�������ֶ���:ֵ��ʼ��(vc��������֧��)
	

	//�����֣��ڽṹ�嶨���ʱ�򴴽�����
	s3.name = "lkq";
	s3.age = 34;
	s3.score = 65;
	cout << "s3.name:" << s3.name <<",s3.age:"<<s3.age<<",s3.score:"<<s3.score<< endl;

	//�ṹ���ڶ���ʵ����
	Student* s4 = new Student();
	s4->name = "hahaha";
}