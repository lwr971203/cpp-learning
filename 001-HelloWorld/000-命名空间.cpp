#include <iostream>

namespace zyz1 //创建一个命名空间来组织代码
{
	int a = 1;
	void test() {
		printf("1\n");
	}
}

namespace zyz2 {
	int b = 2;
	void test() {
		printf("2\n");
	}
}

namespace zyz3 {
	int c = 3;
}

namespace out { //C++中命名空间可以嵌套... 可以但没必要   C与C++很多结构都能乱嵌套
	int d = 4;
	namespace in {
		int e = 5;
	}
}

//引入整个命名空间成员
using namespace zyz2; //记得加冒号
using zyz3::c;

//C与C++是顺序代码结构(从下到上,即从这里开始才是代码的执行区)
int main() {
	printf("%d \n", zyz1::a); //即便是一个源文件下,在用命名空间组织了之后也要用命名空间::来引用
	zyz1::test();

	//已经引入的命名空间就不需要再用命名空间::引用成员了
	printf("%d \n", b);
	test(); // 输出的是zyz2里面的test

	printf("%d \n", c);
	return 0;
}