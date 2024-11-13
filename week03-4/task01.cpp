#include <iostream>

bool isPrime(int number)
{
	if (number % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int number;

	std::cin >> number;

	std::cout << isPrime(number);
}
