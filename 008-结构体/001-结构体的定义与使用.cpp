#include <iostream>
using namespace std;
#include <string>
struct Student
{
	string name; //用到了string,必须包含string的头文件
	int age;
	int score;
} s3; //结构体允许定义的时候创建变量

int main() {
	//第一种创建结构体的方式,struct关键字可省略（这点相对于C语言优化的可以)
	struct Student s1; //C++中声明变量即有实例
	s1.name = "lwr"; //C++中这里的成员访问符区分的也是有道理的,用实例本身访问成员的时候,用点. 用指针访问实例成员的时候用->
	s1.age = 22;
	s1.score = 100;
	cout << "s1.name:" << s1.name << ",s1.age:" << s1.age << ",s1.score:" << s1.score << endl;

	//第二种，初始化器
	Student s2 = {"xjp",22,98}; //不指定参数名. 只能按照顺序赋值
	cout << "s2.name:" << s2.name << ",s2.age:" << s2.age << ",s2.score:" << s2.score << endl;
	//支持不按顺序的.字段名=值初始化,或者是字段名:值初始化(vc编译器不支持)
	

	//第三种，在结构体定义的时候创建变量
	s3.name = "lkq";
	s3.age = 34;
	s3.score = 65;
	cout << "s3.name:" << s3.name <<",s3.age:"<<s3.age<<",s3.score:"<<s3.score<< endl;

	//结构体在堆区实例化
	Student* s4 = new Student();
	s4->name = "hahaha";
}