#include <iostream>
using namespace std;

//变量表现为基类,调用函数时运行实际的子类重写或实现的函数,这就叫多态  (注:多态只在实例范畴讨论,静态范畴没有多态概念) 
//多态的要求：
//继承关系、子类重写父类的虚函数、并且用父类变量(指针或者引用)接收或者说指向、引用子类实例，执行子类的实例对象的重写方法

class Animal {
public:
	virtual void Say() {
		cout << "动物在叫" << endl;
	}
	//将函数声明为虚函数，则这个函数变成一个虚函数指针(vfptr)，指向一个函数地址表(vtable)
	//当子类继承时，继承了虚函数指针(用sizeof测试一下,这个空类确实是一个指针的大小)，子类重写会造成在运行时将虚函数指针指向它已经重写的函数地址，形成多态行为

	//若未将函数声明为虚函数，则子类将直接继承这个函数，当子类新写了同名函数，会隐藏所有父类同名函数包括各种重载
	//此时不存在虚函数指针，用父类变量指向具体实例(有可能是子类实例)时，只会调用父类实现的函数，即不存在多态行为
};
class Cat :public Animal {
	//C++自带子类私有重写虚方法。相当于C#中的显式接口实现,这是一种强制多态,更彻底的多态
	void Say() { //C++中重写虚方法不用加override,C#需要,而且语义更清晰
		cout << "小猫在叫" << endl;
	}
};
class Dog :public Animal {
	void Say() { //重写必须方法签名一致且返回值一致
		cout << "小狗在叫" << endl;
	}
};

void ExecuteSay(Animal& animal) {
	animal.Say(); //是可以访问到私有的重写方法的
}

int main() {
	Animal animal;
	ExecuteSay(animal);
	Cat cat;
	//cat.Say(); //私有
	ExecuteSay(cat);
	Dog dog;
	ExecuteSay(dog);

	cout << "animal size is " << sizeof animal << endl; //8 虚函数指针大小
	cout << "cat size is " << sizeof  cat << endl; //8
	cout << "dog size is " << sizeof  dog << endl; //8
}