#include <iostream>
using namespace std;

class Cpu {
public:
	virtual void Work() = 0;
};
class Memory {
public:
	virtual void Storage() = 0;
};
class DisplayCard {
public:
	virtual void Display() = 0;
};

class IntelCpu :public Cpu {
	void Work() {
		cout << "Intel��Cpu��ʼ����" << endl;
	}
};
class LenovoCpu :public Cpu {
	void Work() {
		cout << "Lenovo��Cpu��ʼ����" << endl;
	}
};

class IntelMemory :public Memory {
	void Storage() {
		cout << "Intel��Memory��ʼ�洢" << endl;
	}
};
class LenovoMemory :public Memory {
	void Storage() {
		cout << "Lenovo��Memory��ʼ�洢" << endl;
	}
};

class IntelDisplayCard :public DisplayCard {
	void Display() {
		cout << "Intel��DisplayCard��ʼ��ʾ" << endl;
	}
};
class LenovoDisplayCard :public DisplayCard {
	void Display() {
		cout << "Lenovo��DisplayCard��ʼ��ʾ" << endl;
	}
};

class Computer {
private:
	Cpu* _cpu;
	Memory* _mem;
	DisplayCard* _card;

public:
	Computer(Cpu* cpu, Memory* mem, DisplayCard* card) :_cpu(cpu), _mem(mem), _card(card) {}

	void DoWork() {
		_cpu->Work();
		_mem->Storage();
		_card->Display();
	}

	~Computer()
	{
		if (_cpu != NULL)
		{
			delete _cpu;
			_cpu = NULL;
		}

		if (_mem != NULL)
		{
			delete _mem;
			_mem = NULL;
		}

		if (_card != NULL)
		{
			delete _card;
			_card = NULL;
		}
	}
};

int main() {
	//��һ̨����
	Cpu* cpu1 = new IntelCpu();
	Memory* mem1 = new IntelMemory();
	DisplayCard* card1 = new IntelDisplayCard();
	Computer* com1 = new Computer(cpu1, mem1, card1);
	com1->DoWork();
	delete com1;

	cout << "===============" << endl;

	//�ڶ�̨����
	Cpu* cpu2 = new LenovoCpu();
	Memory* mem2 = new LenovoMemory();
	DisplayCard* card2 = new LenovoDisplayCard();
	Computer* com2 = new Computer(cpu2, mem2, card2);
	com2->DoWork();
	delete com2;

	cout << "===============" << endl;

	//����̨����
	Cpu* cpu3 = new LenovoCpu();
	Memory* mem4 = new IntelMemory();
	DisplayCard* card4 = new IntelDisplayCard();
	Computer* com4 = new Computer(cpu3, mem4, card4);
	com4->DoWork();
	delete com4;
}