#include <iostream>
using namespace std;
#include <string>

class MyHouse {
	//�����û���ȫ�ֺ���,ʹ�����Է����ҵ�˽�г�Ա
	friend void AccessFriend(MyHouse*);
private:
	string _bedRoom;
public:
	string _sittingRoom;
	MyHouse() {
		_sittingRoom = "�ҵĿ���";
		_bedRoom = "�ҵ�����";
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