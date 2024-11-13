#include <iostream>

int main()
{
	int number;

	std::cout << "Enter your number: ";
	std::cin >> number;

	int currentDigit;
	bool hasOne = false;

	while (number != 0)
	{
		currentDigit = number % 10;

		if (currentDigit == 1)
		{
			hasOne = true;
			break;
		}
		number /= 10;
	}

	std::cout << hasOne << "  /1 - true, 0 - false/ ";
}
