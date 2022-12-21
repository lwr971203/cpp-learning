#include <iostream>
using namespace std;
#include <string>

class MakeDrinking {
protected:
	string _name;
public:
	MakeDrinking() {
		_name = "��ͨ��Ʒ";
	}
	virtual MakeDrinking* Boil() = 0;
	virtual MakeDrinking* PutSomething(double weight) = 0;
	virtual MakeDrinking* Brew() = 0;
	void Complete() {
		cout << "����" << _name << "���" << endl;
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
		cout << "��ũ��ɽȪ" << endl;
		return this; //����ָ�뵱Ȼ���Խ�������ָ��
	}
	MakeDrinking* PutSomething(double weight) {
		cout << "����" << "\"" << _ingredient << "\"" << weight << "��" << endl;
		return this;
	}
	MakeDrinking* Brew() {
		cout << "����" << _name << endl;
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
		cout << "���Ȫˮ" << endl;
		return this;
	}
	MakeDrinking* PutSomething(double weight) {
		cout << "����" << "\"" << _ingredient << "\"" << weight << "��" << endl;
		return this;
	}
	MakeDrinking* Brew() {
		cout << "����" << _name << endl;
		return this;
	}
};

int main() {
	MakeDrinking* make = new MakeCoffee("����", "èʺ");
	make->Boil()->PutSomething(10.5)->Brew()->Complete();
	delete make;

	make = new MakeTea("�̲�", "�̾�");
	make->Boil()->PutSomething(20)->Brew()->Complete();
	delete make;
}