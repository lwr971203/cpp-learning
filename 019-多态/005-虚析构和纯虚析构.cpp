#include <iostream>
using namespace std;
#include <string>

//对于子类存在指针字段的需要用虚析构
class Animal {
public:
	Animal() {
		cout << "Animal的构造函数调用" << endl;
	}
	virtual void Say() = 0;
	/*~Animal() {
		cout << "Animal的析构函数调用" << endl;
	}*/

	//把父类的析构函数定义为虚析构
	//使得在释放父类指向堆区子类时，能优先调用子类对象的析构（然后间接的调用父类的析构）
	/*virtual ~Animal() {
		cout << "Animal的析构函数调用" << endl;
	}*/

	//也可以将虚析构定义为一个纯虚析构，此时父类就变成了一个抽象类，无法实例化自身
	virtual ~Animal() = 0; //要求纯虚析构必须要有实现，因为父类也有可能开辟堆空间，且可能由子类无法释放干净
};
Animal::~Animal() {
	cout << "Animal的析构函数调用" << endl;
}

class Cat :public Animal {
private:
	string* _name;
	void Say() {
		cout << *_name << "小猫在叫" << endl;
	}
public:
	Cat(string name) {
		_name = new string(name);
		cout << "Cat的构造函数调用" << endl;
	}
	~Cat() {
		cout << "Cat的析构函数调用" << endl;
		if (_name != NULL)
		{
			delete _name;
			_name = NULL;
		}
	}
};

int main() {
	Animal* p = new Cat("张飞");
	p->Say();
	//当用父类的指针直接释放堆区中的子类对象时，默认不会调用子类对象的析构函数。而只会调用父类的析构函数
	//此时会造成内存泄露
	delete p;
}