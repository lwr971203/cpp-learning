#include <iostream>
using namespace std;

//里氏转换(子转父)是不需要强转的

class Base {
public:
	string baseName = "defaultBaseName";
	bool compare() {
		return true;
	}
	Base() {

	}
	//Base(const Base& b) {
	//	cout << "发生了Base的拷贝构造" << endl;
	//}
	//Base& operator=(Base& b) {
	//	cout << "发生了Base的默认拷贝" << endl;
	//	return *this;
	//}
};

class Son :public Base {
public:
	string name;
	int age;
	Son(string name, int age) {
		this->name = name;
		this->age = age;
	}
};

//不涉及抽象类的拷贝型里氏转换
void Test1() {
	cout << "Test1=========================================" << endl;
	Son son1("关羽", 12);
	cout << "son1的地址" << &son1 << ", son1的大小" << sizeof son1 << endl; //大小是Son的大小
	Son son2("赵云", 14);

	son1.baseName = "changeBaseName";

	//这里发生拷贝构造 (拷贝型里氏转换)
	Base base1 = son1;
	cout << "base1的地址" << &base1 << ", base1的大小" << sizeof base1 << endl; //地址与son1不同,且大小是Base的大小
	cout << "base1.baseName=" << base1.baseName << endl; //base1.baseName=changeBaseName

	//这里发生拷贝构造(在强转那一步,产生了临时实例,它在全局区),然后再发生拷贝函数,所以一共执行了两步
	base1 = (Base)son1;
	cout << "base1的地址" << &base1 << ", base1的大小" << sizeof base1 << endl; //地址与son1不同,且大小是Base的大小

	//这里发生默认拷贝(拷贝型里氏转换)
	base1 = son2;
	cout << "base1的地址" << &base1 << ", base1的大小" << sizeof base1 << endl; //地址与son2不同,且大小是Base的大小
	cout << "base1.baseName=" << base1.baseName << endl; //base1.baseName=defaultBaseName

	//注: 后三次的地址始终未变
}

//不涉及抽象类的引用型里氏转换
void Test2() {
	cout << "Test2=========================================" << endl;
	Son son1("关羽", 12);
	cout << "son1的地址" << &son1 << ", son1的大小" << sizeof son1 << endl; //大小是Son的大小

	//父类指针 指向子类实例(引用型里氏转换)  也可以说成是父类指针接收子类指针,因为Son* 等价于 &son1
	Base* baseptr = &son1;
	cout << "baseptr的地址" << baseptr << ", baseptr的大小" << sizeof * baseptr << endl; //地址与son1相同,且大小是Base的大小

	//父类引用 引用子类实例(引用型里氏转换)
	Base& baseref = son1;
	cout << "baseref的地址" << &baseref << ", baseref的大小" << sizeof baseref << endl; //地址与son1相同,且大小是Base的大小
}

int main() {
	Test1();
	Test2();
}