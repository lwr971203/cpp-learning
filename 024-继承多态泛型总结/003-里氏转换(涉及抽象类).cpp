#include <iostream>
using namespace std;

//里氏转换(子转父)是不需要强转的

class AbstractBase {
public:
	string baseName = "baseName";
	virtual void Test() = 0;
};

class CompletedSon : public AbstractBase {
public:
	string name;
	int age;
	CompletedSon(string name, int age) {
		this->name = name;
		this->age = age;
	}
	void Test() {
		cout << "son is being test" << endl;
	}
};


//涉及抽象类的引用型里氏转换(有且仅有引用型里氏转换)
void Test1() {
	cout << "Test5=========================================" << endl;
	CompletedSon cpSon1("关羽", 12);
	cpSon1.baseName = "sonName";
	cout << "cpSon1的地址=" << &cpSon1 << ",大小为" << sizeof cpSon1 << endl; //大小是CompletedSon大小

	//抽象类无法直接接收子类实例(包括强转), 因为抽象类的构造函数无法主动调用, 抽象类的构造函数只能被子类调用
	//AbstractBase abbase1 = cpSon1; //主动调用AbstractBase的拷贝构造函数,非法！ 
	 //(AbstractBase)cpSon1; //强转同样主动调用拷贝构造产生临时实例,同样非法!

	//以下是抽象类间接接收子类实例

	//抽象类指针 指向子类实例(引用型里氏转换)
	AbstractBase* abb1ptr = &cpSon1;
	cout << "abb1ptr的地址=" << abb1ptr << ",大小为" << sizeof * abb1ptr << endl; //与cpSon1地址相同,但大小是AbstractBase的大小
	cout << "abb1ptr->baseName = " << abb1ptr->baseName << endl; //abb1ptr->baseName = sonName
	cout << "abb1ptr->name = " << ((CompletedSon*)abb1ptr)->name << endl; //abb1ptr->name = 关羽
	abb1ptr->Test();

	//抽象类引用 引用子类实例(引用型里氏转换)
	AbstractBase& abb1ref = cpSon1;
	cout << "abb1ref的地址=" << &abb1ref << ",大小为" << sizeof  abb1ref << endl; //与cpSon1地址相同,但大小是AbstractBase的大小
	cout << "abb1ref.baseName = " << abb1ref.baseName << endl; //abb1ref.baseName = sonName
	cout << "abb1ref.name = " << ((CompletedSon&)abb1ref).name << endl; //abb1ref.name = 关羽
	abb1ref.Test();

	//多此一举写法,但某些情况必须这么写才符合预期,例如某些函数需要显式的父类引用参数表达父类最后提高重载的优先级
	AbstractBase& abb2ref = (AbstractBase&)cpSon1;
	cout << "abb2ref的地址=" << &abb2ref << ",大小为" << sizeof abb2ref << endl; //与cpSon1地址相同,但大小是AbstractBase的大小
	abb2ref.Test();

	//下面同样会主动调用拷贝构造函数.非法!
	//AbstractBase abb3 = *abb1ptr;
}

//抽象类不允许直接当成参数,因为形参会主动拷贝构造
//void Test2(AbstractBase b) {
//
//}

//抽象类不允许直接当成返回值,因为返回值会主动拷贝构造
//AbstractBase Test3() {
//
//}

int main() {
	Test1();

	//综上所述,在C++中, 除了定义抽象类的地方，任何使用抽象类的地方，都要用抽象类指针或抽象类引用
}