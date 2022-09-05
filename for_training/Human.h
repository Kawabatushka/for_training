#pragma once
#include <iostream>
#include <string>
#include "main.cpp"

class Human
{
public:
	Human();
	Human(std::string _name, int _weight, int _high);
	void GetInfo();
	void Speak();
	friend bool BagOfHuman(Bag* bag);

private:
	std::string name;
	int weight, high;
};