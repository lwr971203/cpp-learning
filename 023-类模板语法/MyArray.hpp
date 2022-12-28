#include <iostream>
using namespace std;


template<typename T>
class MyArray {
private:
	//容量
	int _capacity;
	//长度
	int _length;
	//堆区维护的数组
	T* _arr;

public:
	MyArray(int capacity)
	{
		this->_capacity = capacity;
		this->_length = 0;
		this->_arr = new T[this->_capacity]; //开辟的空间调用的是T类型的默认无参构造函数。
	}
	MyArray(const MyArray& arr) {
		this->_capacity = arr._capacity;
		this->_length = arr._length;

		//深拷贝
		this->_arr = new T[arr._capacity];
		for (int i = 0; i < arr._length; i++)
		{
			this->_arr[i] = arr._arr[i];
		}
	}
	MyArray& operator=(MyArray& arr) {
		this->_capacity = arr._capacity;
		this->_length = arr._length;

		//原本在堆空间可能开辟了内存，先释放
		if (this->_arr != NULL)
		{
			delete[] this->_arr;
		}
		this->_arr = new T[arr._capacity];
		for (int i = 0; i < arr._length; i++)
		{
			this->_arr[i] = arr._arr[i];
		}
	}
	~MyArray()
	{
		if (this->_arr != NULL)
		{
			delete[] this->_arr;
			this->_arr = NULL;
		}
	}

	//尾插
	bool InsertEnd(T& t) {
		if (this->_length == this->_capacity)
		{
			return false;
		}

		this->_arr[this->_length] = t;
		this->_length++;
		return true;
	}

	//尾删
	bool DeleteEnd() {
		if (this->_length == 0)
		{
			return false;
		}
		//delete this->_arr[this->_length - 1];
		this->_length--;
	}

	//重载索引,为了能让返回值能作为左值，返回引用
	T& operator[](int index) {
		if (index >= 0 && index <= this->_length - 1)
		{
			return this->_arr[index];
		}
		//return this->_arr[this->_length - 1];
	}


	int GetCapacity() {
		return this->_capacity;
	}

	int GetLength() {
		return this->_length;
	}
};