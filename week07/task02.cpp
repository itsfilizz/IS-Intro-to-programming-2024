#include <iostream>

int main()
{
	int numbersCount;
	std::cout << "Enter the amount of numbers: ";
	std::cin >> numbersCount;

	int arrNum[1024];

	for (int i = 0; i < numbersCount; i++)
	{
		std::cin >> arrNum[i];
	}

	for (int i = 0; i < numbersCount; i++)
	{
		if (arrNum[i] % 2 == 0)
		{
			arrNum[i] -= 1;
		}
		else if (arrNum[i] % 2 != 0)
		{
			arrNum[i] -= 3;
		}

		if (arrNum[i] > 10)
		{
			arrNum[i] %= 10;
		}
		else if (arrNum[i] <= 10)
		{
			arrNum[i] *= 10;
		}
	}

	for (int i = 0; i < numbersCount; i++)
	{
		std::cout << arrNum[i] << std::endl;
	}
}
