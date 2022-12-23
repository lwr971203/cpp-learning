#include <iostream>
using namespace std;
#include <string>

template<typename T1,typename T2>
class Person {
public:
	T1 _name;
	T2 _age;
	Person(T1 name, T2 age);
	void Show();
};
//����ʵ�ֳ�Ա����
template<class T1,class T2>
Person<T1, T2>::Person(T1 name, T2 age) { //������ǰ���Person<T1,T2> ����ȥ�ǱȽ�����ģ���û�취����C++Ӳ�Թ涨��
	this->_name = name;
	this->_age = age;
}
template<class T1, class T2>
void Person<T1, T2>::Show() {
	cout << "name=" << this->_name << ",age=" << this->_age << endl;
}

int main() {
	Person<string, int> p1("�����",100);
	p1.Show();
}