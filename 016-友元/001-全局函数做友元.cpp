#include <iostream>
using namespace std;
#include <string>

class MyHouse {
	//声明好基友全局函数,使他可以访问我的私有成员
	friend void AccessFriend(MyHouse*);
private:
	string _bedRoom;
public:
	string _sittingRoom;
	MyHouse() {
		_sittingRoom = "我的客厅";
		_bedRoom = "我的卧室";
	}
};

void AccessFriend(MyHouse* house) {
	cout << house->_bedRoom << endl;
}
int main() {
	MyHouse myHouse;
	cout << myHouse._sittingRoom << endl;

	AccessFriend(&myHouse);
}