#include <iostream>
using namespace std;


template<typename T>
class MyArray {
private:
	//����
	int _capacity;
	//����
	int _length;
	//����ά��������
	T* _arr;

public:
	MyArray(int capacity)
	{
		this->_capacity = capacity;
		this->_length = 0;
		this->_arr = new T[this->_capacity]; //���ٵĿռ���õ���T���͵�Ĭ���޲ι��캯����
	}
	MyArray(const MyArray& arr) {
		this->_capacity = arr._capacity;
		this->_length = arr._length;

		//���
		this->_arr = new T[arr._capacity];
		for (int i = 0; i < arr._length; i++)
		{
			this->_arr[i] = arr._arr[i];
		}
	}
	MyArray& operator=(MyArray& arr) {
		this->_capacity = arr._capacity;
		this->_length = arr._length;

		//ԭ���ڶѿռ���ܿ������ڴ棬���ͷ�
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

	//β��
	bool InsertEnd(T& t) {
		if (this->_length == this->_capacity)
		{
			return false;
		}

		this->_arr[this->_length] = t;
		this->_length++;
		return true;
	}

	//βɾ
	bool DeleteEnd() {
		if (this->_length == 0)
		{
			return false;
		}
		//delete this->_arr[this->_length - 1];
		this->_length--;
	}

	//��������,Ϊ�����÷���ֵ����Ϊ��ֵ����������
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