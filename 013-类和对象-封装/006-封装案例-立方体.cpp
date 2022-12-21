#include <iostream>
using namespace std;

class Cube {
private:
	int _length;
	int _width;
	int _height;
public:
	void SetLength(int length) {
		_length = length;
	}
	void SetWidth(int width) {
		_width = width;
	}
	void SetHeight(int height) {
		_height = height;
	}
	int GetLength() {
		return _length;
	}
	int GetWidth() {
		return _width;
	}
	int GetHeight() {
		return _height;
	}

	int CalculateArea() {
		return 2 * (_length * _width + _width * _height + _height * _length);
	}

	int CalculateCubage() {
		return _length * _width * _height;
	}

	bool Equals(Cube& cube) {
		if (_height == cube.GetHeight() &&
			_width == cube.GetWidth() &&
			_length == cube.GetLength())
		{
			return true;
		}
		return false;
	}
};

bool IsSameCube(Cube& cube1, Cube& cube2) {
	if (cube1.GetHeight() == cube2.GetHeight() &&
		cube1.GetLength() == cube2.GetLength() &&
		cube1.GetWidth() == cube2.GetWidth())
	{
		return true;
	}
	return false;
}

int main() {
	Cube cube1;
	cube1.SetHeight(100);
	cube1.SetLength(100);
	cube1.SetWidth(100);

	Cube cube2;
	cube2.SetHeight(100);
	cube2.SetLength(100);
	cube2.SetWidth(100);

	cout << "cube1的面积:" << cube1.CalculateArea() << endl;
	cout << "cube2的面积:" << cube2.CalculateArea() << endl;

	cout << "cube1的体积" << cube1.CalculateCubage() << endl;
	cout << "cube2的体积" << cube2.CalculateCubage() << endl;

	cout << IsSameCube(cube1, cube2) << endl;
	cout << cube1.Equals(cube2) << endl;
}