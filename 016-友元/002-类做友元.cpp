#include <iostream>
using namespace std;
#include <string>

class MyHouse {
	//声明好基友类，使他可以访问我的私有成员
	friend class Friend;
private:
	string _bedRoom;
public:
	string _sittingRoom;
	MyHouse();
};
//成员函数可以放到类外面实现(离谱)
MyHouse::MyHouse() {
	_bedRoom = "我的卧室";
	_sittingRoom = "我的客厅";
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
	_friendHouse = new MyHouse(); //这里加不加括号都行
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