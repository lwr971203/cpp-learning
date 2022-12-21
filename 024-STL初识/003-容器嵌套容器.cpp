#include <iostream>
using namespace std;
#include <vector>

int main() {
	vector<vector<int>> myVector;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	for (size_t i = 0; i < 4; i++)
	{
		v1.push_back(i+1);
		v2.push_back(i+2);
		v3.push_back(i+3);
		v4.push_back(i+4);
	}
	myVector.push_back(v1);
	myVector.push_back(v2);
	myVector.push_back(v3);
	myVector.push_back(v4);

	//±éÀú
	for (vector<vector<int>>::iterator pIt = myVector.begin(); pIt != myVector.end(); pIt++)
	{
		for (vector<int>::iterator sIt = (*pIt).begin(); sIt != (*pIt).end(); sIt++)
		{
			cout << *sIt << " ";
		}
		cout << endl;
	}
}