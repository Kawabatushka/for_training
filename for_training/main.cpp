#include<iostream>
#include <string>
#include "MyClass.h"
#include "Human.h"

using namespace std;

struct Bag
{
	bool isFool = 0;
	int capacity = 10;
	int total = 9;
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

	MyClass m;
	

	cout << "\nВаалейкум!!!\n";

	return 0;
}