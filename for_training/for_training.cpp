#include<iostream>
#include <string>

using namespace std;

struct Bag
{
	bool isFool = 0;
	int capacity = 10;
	int total = 9;
};

class Human
{
public:
	Human()
	{
		this->name = "Alex";
		this->weight = 60;
		this->high = 100;
	}

	Human(string _name, int _weight, int _high)
	{
		this->name = _name;
		this->weight = _weight;
		this->high = _high;
	}

	void GetInfo()
	{
		cout << "I'm is " << this->name << ". My weight is " << this->weight << " and high is " << this->high << "\n";
	}

	void Speak();

	friend bool BagOfHuman(Bag *bag);

private:
	string name;
	int weight, high;
};

void Human::Speak()
{
	cout << "Bla bla bla\n";
}

bool BagOfHuman(Bag* bag)
{
	bag->total++;
	bag->total == bag->capacity ? bag->isFool = 1 : bag->isFool = 0;
	return &bag->isFool;
}

int main()
{
	setlocale(0, "");

	cout << "Салам!\n\n";

	Human a;
	
	a.Speak();
	a.GetInfo();

	Bag b;
	BagOfHuman(&b);

	cout << "\nВаалейкум!!!\n";

	return 0;
}