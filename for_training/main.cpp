#include<iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Fraction
{
public:
	Fraction() {};
	Fraction(int _numerator, int _denominator) :numerator(_numerator), denominator(_denominator)
	{
		if (denominator == 0)
		{
			throw std::runtime_error("Error!");
		}
	}

	double GetFraction()
	{
		return static_cast<double>(numerator) / denominator;
	}

private:
	int numerator = 0, denominator = 0;
};

int main()
{
	setlocale(0, "");

	cout << "Enter 2 numbers.\n";
	int n, d;
	cin >> n; // проверка на ввод валидных значений
	cin >> d;

	try
	{
		Fraction f(n, d);
		cout << "Result of division is " << f.GetFraction() << "\n";
	}
	catch (std::runtime_error& ex)
	{
		cout << "Execption was catched!\n";
		cerr << ex.what() << "\n";
	}


	return 0;
}