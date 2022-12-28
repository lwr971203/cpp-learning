#include <iostream>
#include <queue>
using namespace std;

/*
���캯����

- `queue<T> que;`                                 //queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
- `queue(const queue &que);`            //�������캯��

��ֵ������

- `queue& operator=(const queue &que);`           //���صȺŲ�����

���ݴ�ȡ��

- `push(elem);`                             //����β���Ԫ��
- `pop();`                                      //�Ӷ�ͷ�Ƴ���һ��Ԫ��
- `back();`                                    //�������һ��Ԫ��
- `front(); `                                  //���ص�һ��Ԫ��

��С������

- `empty();`            //�ж϶�ջ�Ƿ�Ϊ��
- `size(); `              //����ջ�Ĵ�С
*/


class Person {
public:
	string name;
	int age;
	Person(string name, int age) {
		this->name = name;
		this->age = age;	
	}
};

int main(){
	queue<Person> q;
	//��β���
	q.push(Person("��ɮ", 30));
	q.push(Person("�����", 1000));
	q.push(Person("��˽�", 900));
	q.push(Person("ɳɮ", 800));

	cout << "������һ����" << q.size() << "��Personʵ��" << endl;
	while (!q.empty())
	{
		cout << "��ͷԪ��-����: " << q.front().name << " , ��ͷԪ��-����: " << q.front().age << endl;
		cout << "��βԪ��-����: " << q.back().name << " , ��βԪ��-����: " << q.back().age << endl;

		//��ͷ����
		q.pop();
	}
	cout << "������һ����" << q.size() << "��Personʵ��" << endl;
}