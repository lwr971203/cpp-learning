#include <iostream>
using namespace std;
#include <string>

class MyHouse {
	//�����û����࣬ʹ�����Է����ҵ�˽�г�Ա
	friend class Friend;
private:
	string _bedRoom;
public:
	string _sittingRoom;
	MyHouse();
};
//��Ա�������Էŵ�������ʵ��(����)
MyHouse::MyHouse() {
	_bedRoom = "�ҵ�����";
	_sittingRoom = "�ҵĿ���";
}

class Friend {
private:
	MyHouse* _friendHouse;
public:
	Friend();
	~Friend();
	void Access();
};
Friend::Friend() {
	_friendHouse = new MyHouse(); //����Ӳ������Ŷ���
}
void Friend::Access() {
	cout << "_frendHouse->_sittingRoom=" << _friendHouse->_sittingRoom << endl;
	cout << "_frendHouse->_bedRoom=" << _friendHouse->_bedRoom << endl;
}
Friend::~Friend() {
	if (_friendHouse != NULL)
	{
		delete _friendHouse;
		_friendHouse = NULL;
	}
}

int main() {
	Friend fed;
	fed.Access();
}