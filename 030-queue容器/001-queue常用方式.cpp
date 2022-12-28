#include <iostream>
#include <queue>
using namespace std;

/*
构造函数：

- `queue<T> que;`                                 //queue采用模板类实现，queue对象的默认构造形式
- `queue(const queue &que);`            //拷贝构造函数

赋值操作：

- `queue& operator=(const queue &que);`           //重载等号操作符

数据存取：

- `push(elem);`                             //往队尾添加元素
- `pop();`                                      //从队头移除第一个元素
- `back();`                                    //返回最后一个元素
- `front(); `                                  //返回第一个元素

大小操作：

- `empty();`            //判断堆栈是否为空
- `size(); `              //返回栈的大小
*/


class Person {
public:
	string name;
	int age;
	Person(string name, int age) {
		this->name = name;
		this->age = age;	
	}
};

int main(){
	queue<Person> q;
	//队尾入队
	q.push(Person("唐僧", 30));
	q.push(Person("孙悟空", 1000));
	q.push(Person("猪八戒", 900));
	q.push(Person("沙僧", 800));

	cout << "队列中一共有" << q.size() << "个Person实例" << endl;
	while (!q.empty())
	{
		cout << "队头元素-姓名: " << q.front().name << " , 队头元素-年龄: " << q.front().age << endl;
		cout << "队尾元素-姓名: " << q.back().name << " , 队尾元素-年龄: " << q.back().age << endl;

		//队头出队
		q.pop();
	}
	cout << "队列中一共有" << q.size() << "个Person实例" << endl;
}