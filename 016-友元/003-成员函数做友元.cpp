#include <iostream>
using namespace std;
#include <string>
//成员函数做友元这里有很多坑，注意。C++不统一的凌乱规则造成的

class Man; //声明存在这么个类，下面开始进入不完全类型时期（未被定义）
class GoodGay {
private:
	//在Man的不完全类型时期，只能声明使用这个类的标识性变量，即指针或引用
	//因为不知道这个类具体如何定义，要开多大内存，所以不能创建实例。
	//但是如果用指针或引用，只需固定开4或8个字节，所以这个行为是绝对允许的
	Man* _myFriend;
public:
	string _name;
	GoodGay();
	~GoodGay();
	//要将这个成员函数设置为另一个类的友元，只能声明且不能定义与另一个类的实例的交互
	void AccessFriend();
};

class Man {
	//声明基友成员方法
	friend void GoodGay::AccessFriend(); //设置友元成员函数前，拥有成员函数的那个类必须先被定义（且声明有这个成员函数）
	//假如将Man的定义放置GoodGay前，则编译器无法确定friend void GoodGay::AccessFriend();中GoodGay是类还是命名空间
	//则设置不成功，AccessFriend自然就无法成为友元成员函数
private:
	string _myBedRoom;
public:
	string _name;
	string _mySittingRoom;
	Man();
};
Man::Man() {
	_name = "张飞";
	_myBedRoom = "卧室";
	_mySittingRoom = "客厅";
}

//当Man类被定义之后，就脱离了Man类的不完全时期，即可以开始使用Man类的实例了
GoodGay::GoodGay() {
	_myFriend = new Man();
	_name = "刘备";
}
GoodGay::~GoodGay() {
	if (_myFriend != NULL)
	{
		delete _myFriend;
		_myFriend = NULL;
	}
}
void GoodGay::AccessFriend() {
	cout << _name << "正在访问" << _myFriend->_name << "的" << _myFriend->_mySittingRoom << endl;
	cout << _name << "正在访问" << _myFriend->_name << "的" << _myFriend->_myBedRoom << endl;
}

int main() {
	GoodGay goodGay;
	goodGay.AccessFriend();
}