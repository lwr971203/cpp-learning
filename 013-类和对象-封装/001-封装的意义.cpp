#include <iostream>
using namespace std;

//����һ����
class Circle {
//C++��C#��������Ƿ������η����Է������ʽ��д
private:
	const double PI = 3.1415926;
public:
	int radius;
	double CalculateZC() {
		return 2 * radius*PI;
	}
};
int main() {
	Circle circle; //C++��������ʵ�����ˣ�ֱ����ջ�п�����һ���ڴ�ռ�
	circle.radius = 10;
	cout << "�뾶Ϊ10��Բ���ܳ�:" << circle.CalculateZC() << endl;
}