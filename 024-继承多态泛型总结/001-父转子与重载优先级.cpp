#include <iostream>
using namespace std;

class Base {
public:
	string baseName = "defaultBaseName";
	bool compare() {
		return true;
	}
	Base() {

	}
	Base(const Base& b) {
		cout << "发生了Base的拷贝构造" << endl;
	}
	Base& operator=(Base& b) {
		cout << "发生了Base的默认拷贝" << endl;
		return *this;
	}
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

//子类实例参数重载
//void Test1(Son son) {
//	cout << "void Test1(Son son)=>" << son.name << endl;
//}

//泛型实例参数重载
//template<class T>
//void Test1(T obj){
//	cout << "void Test1(T obj)=>" << obj.name << endl; //操,真牛逼,开启模板之后就可以乱写了
//}

//泛型实例参数重载
template<class T>
void Test1(T& obj) {
	cout << "void Test1(T& obj)=>" << obj.name << endl;
}

//父类实例参数重载
//void Test1(Base base) {
//	Son son = (Son)base; //注意父类实例是不能往子类实例转的,强转也不行
//		cout << "void Test1(Base base)=>" << son.name << endl;
//}

//父类实例参数重载
void Test1(Base& base) {
	Son& son = (Son&)base; //父类引用是可以往子类引用转
	cout << "void Test1(Base& base)=>" << son.name << endl; //son中并未有name, cout在son.name就死掉了,后面没法输出了
}

//父类实例参数重载
//void Test1(Base base) {
//	Son& son = (Son&)base; //注意父类实例也是可以往子类引用转
//	cout << "void Test1(Base base)=>" << son.name << endl; //这里是乱码,而且可能是内存泄露
//}




//子类指针参数重载
void Test1(Son* son) {
	cout << "void Test1(Son* son)=>" << son->name << endl;
}

//泛型指针参数
template<typename T>
void Test(T* obj) {
	if (obj == NULL)
	{
		cout << "不要传入空指针谢谢" << endl;
		return;
	}
	cout << "void Test(T* obj)=>" << obj->name << endl;
}

//父类指针参数重载
void Test1(Base* base) {
	Son* son = (Son*)base; //父类指针可以往子类指针转
	cout << "void Test1(Base* base)=>" << son->name << endl;
}



int main() {
	Son son1("关羽", 12);

	//默认重载优先级：若传子类实例,则优先子类实例参数重载,如果没有就传入泛型实例参数重载，如果还没有就传入父类实例参数重载
	//Test1(son1);

	//传入子类实例,且没有子类实例参数重载,则传入泛型实例参数重载
	Test1(son1);

	//Base base = son1;
	//传入父类实例, 强行优先父类实例参数重载
	//Test1(base);

	/*
	错误示范
	Test1((Base)son1);
	错误原因不在参数列表中强转 ,而在于强转对象是个临时实例在全局区,不可直接被引用变量参数(Base&)直接接收,如果变const引用(被编译器优化后的引用)就是的可以接收的
	*/

	//传入子类指针,优先子类指针参数重载
	//Test1(&son1);

	//传入子类指针,且没有子类指针参数重载,则传入泛型指针参数重载
	Test(&son1);

	//传入父类指针,强行优先父类指针参数重载
	Test1((Base*)&son1);

	/*
	注: c++中关于父转子的三种情况,必须强转: 父实例转子引用、父引用转子引用、父指针转子指针
		这是一种编译不检查的转换关系, 如果运行时是逻辑是错误, 可能埋下bug
	*/
}