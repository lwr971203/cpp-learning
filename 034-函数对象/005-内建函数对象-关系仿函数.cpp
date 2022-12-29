#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

/*
- template<class T> bool equal_to<T>`                    //����
- `template<class T> bool not_equal_to<T>`            //������
- `template<class T> bool greater<T>`                      //����
- `template<class T> bool greater_equal<T>`          //���ڵ���
- `template<class T> bool less<T>`                           //С��
- `template<class T> bool less_equal<T>`               //С�ڵ���
*/

int main() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	sort(v.begin(),v.end(),greater<int>());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << " ";
	}
}