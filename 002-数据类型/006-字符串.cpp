#include <iostream>
using namespace std;
#include <string>

int main() {
	//C风格的字符串
	char str1[] = "Hello World";
	cout << str1 << endl;
	//char[] str2 = "Hello World"; //不支持

	//C++风格的字符串,与C#中一样，只不过要包含一个string头文件
	string str3 = "Hello World";
	cout << str3 << endl;

	//测试C风格的字符串(本质是数组指针)是否具有字符串的不可变性
	cout << "str1的地址" << (int)&str1 << endl;
	//str1 = "Hello World1"; //编译错误,数组指针是特殊的指针常量   这里说明c风格的字符串实例(字符数组实例)有不可变性的,每次都为字符串实例新开辟空间
	//测试C++风格的string类型字符串是否具有字符串的不可变性
	cout << "str3 的地址,sizeof is " << (int)&str3 << "," << sizeof str3 << endl;
	str3 = "好的哈哈哈哈哈哈哈哈哈哈啊哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈啊哈哈哈哈哈哈哈2它9u";
	cout << "str3 改变后的地址,sizeof is " << (int)&str3 << "," << sizeof str3 << endl;
	cout << str3 << endl;
	//两次的地址是一样的,且sizeof一样,不知道内部怎么实现的,非常神奇.也就是说C++的string类型实例可以看成"动态可变的",但内存大小不变.  
	//这与其他所有面向对象编程语言的预定义类型string行为完全不同

	string str = "";
	cout << sizeof str << endl; //string类型实例内存大小固定为28字节(但在对象实例中string的内存大小又是诡异的,不是28而且也不是固定的)
}