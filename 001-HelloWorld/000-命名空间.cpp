#include <iostream>

namespace zyz1 //����һ�������ռ�����֯����
{
	int a = 1;
	void test() {
		printf("1\n");
	}
}

namespace zyz2 {
	int b = 2;
	void test() {
		printf("2\n");
	}
}

namespace zyz3 {
	int c = 3;
}

namespace out { //C++�������ռ����Ƕ��... ���Ե�û��Ҫ   C��C++�ܶ�ṹ������Ƕ��
	int d = 4;
	namespace in {
		int e = 5;
	}
}

//�������������ռ��Ա
using namespace zyz2; //�ǵü�ð��
using zyz3::c;

//C��C++��˳�����ṹ(���µ���,�������￪ʼ���Ǵ����ִ����)
int main() {
	printf("%d \n", zyz1::a); //������һ��Դ�ļ���,���������ռ���֯��֮��ҲҪ�������ռ�::������
	zyz1::test();

	//�Ѿ�����������ռ�Ͳ���Ҫ���������ռ�::���ó�Ա��
	printf("%d \n", b);
	test(); // �������zyz2�����test

	printf("%d \n", c);
	return 0;
}