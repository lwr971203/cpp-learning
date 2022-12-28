#include <iostream>
using namespace std;
#include <vector>

/*
vector容器相当于C#中的List可以动态扩容的数组
- vector<T> v; `               		     //采用模板实现类实现，默认构造函数
- `vector(v.begin(), v.end());   `       //将v[begin(), end())区间中的元素拷贝给本身。
- `vector(n, elem);`                            //构造函数将n个elem拷贝给本身。
- `vector(const vector &vec);`         //拷贝构造函数。
*/
void printVector(vector<int>& v1) {
	for (vector<int>::iterator i = v1.begin(); i != v1.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}
int main() {
	//无参构造
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//通过区间的方式构造
	vector<int> v2(v1.begin(),v1.end()); //注意是左闭右开区间
	printVector(v2);

	//n个elem的构造方式
	vector<int> v3(10, 100);
	printVector(v3);
}