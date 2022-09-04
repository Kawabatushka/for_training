#include<iostream>

using namespace std;

class Human
{
public:
	Human(string _name, int _weight, int _high)
	{
		this->name = _name;
		this->weight = _weight;
		this->high = _high;
	}

	void Speak();

private:
	string name;
	int weight, high;
};

void Human::Speak()
{
	cout << "Bla bla bla\n";
}

int main()
{
	setlocale(0, "");

	cout << "Салам\n";

	return 0;
}