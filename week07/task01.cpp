#include <iostream>

int main()
{
	int numbersCount;
	std::cout << "Enter the amount of numbers: ";
	std::cin >> numbersCount;

	int numbersArray[1024];

	std::cout << "Now, enter the numbers: ";
	for (int i = 0; i < numbersCount; i++)
	{
		std::cin >> numbersArray[i];
	}

	for (int i = numbersCount - 1; i >= 0; i--)
	{
		std::cout << numbersArray[i] << std::endl;
	}
}
