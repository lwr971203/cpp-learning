#include <iostream>
#include <stack>
using namespace std;

/*
���캯����

- `stack<T> stk;`                                 //stack����ģ����ʵ�֣� stack�����Ĭ�Ϲ�����ʽ
- `stack(const stack &stk);`            //�������캯��

��ֵ������

- `stack& operator=(const stack &stk);`           //���صȺŲ�����

���ݴ�ȡ��

- `push(elem);`      //��ջ�����Ԫ��
- `pop();`                //��ջ���Ƴ���һ��Ԫ��
- `top(); `                //����ջ��Ԫ��

��С������

- `empty();`            //�ж϶�ջ�Ƿ�Ϊ��
- `size(); `              //����ջ�Ĵ�С
*/

int main() {
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	if (!s.empty())
	{
		cout << "ջ�Ĵ�СΪ: " << s.size() << endl;
		cout << "ջ�е�һ��Ԫ����: " << s.top() << endl;
		s.pop();
		cout << "ջ�Ĵ�СΪ: " << s.size() << endl;
		cout << "ջ�е�һ��Ԫ����: " << s.top() << endl;
	}
}