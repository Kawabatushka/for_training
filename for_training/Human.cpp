#include "Human.h"

class Human
{
public:
	Human()
	{
		this->name = "Alex";
		this->weight = 60;
		this->high = 100;
	}

	Human(std::string _name, int _weight, int _high)
	{
		this->name = _name;
		this->weight = _weight;
		this->high = _high;
	}

	void GetInfo()
	{
		std::cout << "I'm is " << this->name << ". My weight is " << this->weight << " and high is " << this->high << "\n";
	}

	void Speak();

	friend bool BagOfHuman(Bag* bag);

private:
	std::string name;
	int weight, high;
};