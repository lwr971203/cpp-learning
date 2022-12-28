#include<iostream>
using namespace std;
#include <vector>

void printVector(vector<int>& v){
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}

int main() {
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//直接用operator=
	vector<int> v2;
	v2 = v1;
	printVector(v2);

	//区间方式赋值
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	//n个elem方式
	vector<int> v4;
	v4.assign(10, 100);
	printVector(v4);
}