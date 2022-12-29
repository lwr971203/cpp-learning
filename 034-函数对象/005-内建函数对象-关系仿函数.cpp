#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

/*
- template<class T> bool equal_to<T>`                    //等于
- `template<class T> bool not_equal_to<T>`            //不等于
- `template<class T> bool greater<T>`                      //大于
- `template<class T> bool greater_equal<T>`          //大于等于
- `template<class T> bool less<T>`                           //小于
- `template<class T> bool less_equal<T>`               //小于等于
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