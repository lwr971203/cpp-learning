#include <iostream>
using namespace std;
#include <string>

class MakeDrinking {
protected:
	string _name;
public:
	MakeDrinking() {
		_name = "普通饮品";
	}
	virtual MakeDrinking* Boil() = 0;
	virtual MakeDrinking* PutSomething(double weight) = 0;
	virtual MakeDrinking* Brew() = 0;
	void Complete() {
		cout << "制作" << _name << "完成" << endl;
	}
};

class MakeCoffee :public MakeDrinking {
public:
	MakeCoffee(string name, string ingredient) {
		_name = name;
		_ingredient = ingredient;
	}
private:
	string _ingredient;
	MakeDrinking* Boil() {
		cout << "煮农夫山泉" << endl;
		return this; //父类指针当然可以接收子类指针
	}
	MakeDrinking* PutSomething(double weight) {
		cout << "倒入" << "\"" << _ingredient << "\"" << weight << "克" << endl;
		return this;
	}
	MakeDrinking* Brew() {
		cout << "冲泡" << _name << endl;
		return this;
	}
};

class MakeTea :public MakeDrinking {
public:
	MakeTea(string name, string ingredient) {
		_name = name;
		_ingredient = ingredient;
	}
private:
	string _ingredient;
	MakeDrinking* Boil() {
		cout << "煮矿泉水" << endl;
		return this;
	}
	MakeDrinking* PutSomething(double weight) {
		cout << "倒入" << "\"" << _ingredient << "\"" << weight << "克" << endl;
		return this;
	}
	MakeDrinking* Brew() {
		cout << "冲泡" << _name << endl;
		return this;
	}
};

int main() {
	MakeDrinking* make = new MakeCoffee("咖啡", "猫屎");
	make->Boil()->PutSomething(10.5)->Brew()->Complete();
	delete make;

	make = new MakeTea("奶茶", "奶精");
	make->Boil()->PutSomething(20)->Brew()->Complete();
	delete make;
}