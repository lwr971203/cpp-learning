#include <iostream>
using namespace std;

//C��C++������˳��ṹ,�����ڵ���ǰ�������߶���,����������̵ı׶�,�Ӷ�����ͷ�ļ������������
//�������������Զ���Σ���ֻ�ܴ���һ������
int GetMax(int , int );  //����������ʡ���β�,����c���Է��
int GetMax(int num1, int num2); 
int GetMax(int num1, int num2); 

int main() {
	int num1 = 10;
	int num2 = 20;
	cout << "The Max Vlaue is :" << GetMax(num1,num2) << endl;
}

int GetMax(int num1,int num2) {
	return num1 > num2 ? num1 : num2;
}