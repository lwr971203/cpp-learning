#include <iostream>
#include <stack>
using namespace std;

/*
构造函数：

- `stack<T> stk;`                                 //stack采用模板类实现， stack对象的默认构造形式
- `stack(const stack &stk);`            //拷贝构造函数

赋值操作：

- `stack& operator=(const stack &stk);`           //重载等号操作符

数据存取：

- `push(elem);`      //向栈顶添加元素
- `pop();`                //从栈顶移除第一个元素
- `top(); `                //返回栈顶元素

大小操作：

- `empty();`            //判断堆栈是否为空
- `size(); `              //返回栈的大小
*/

int main() {
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	if (!s.empty())
	{
		cout << "栈的大小为: " << s.size() << endl;
		cout << "栈中第一个元素是: " << s.top() << endl;
		s.pop();
		cout << "栈的大小为: " << s.size() << endl;
		cout << "栈中第一个元素是: " << s.top() << endl;
	}
}