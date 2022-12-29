#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void Print(int v) {
	cout << v << " ";
}

int main(){
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	sort(v.begin(),v.end(),greater<int>()); //½µÐò
	for_each(v.begin(),v.end(),Print);
}