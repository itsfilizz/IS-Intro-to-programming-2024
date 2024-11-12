#include <iostream>

int main()
{
    int firstNumber, secondNumber;

    std::cin >> firstNumber >> secondNumber;

	if (secondNumber % firstNumber == 0)
	{
		std::cout << 1;
	}
	else
	{
		std::cout << 0;
	}
}