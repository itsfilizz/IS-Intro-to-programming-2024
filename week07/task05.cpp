#include <iostream>

int main()
{
    int arrCount[101] = { 0 };

	int number;

	while (true)
	{
		std::cin >> number;

		if (number == 0)
			break;

		if (number >= 1 && number <= 100)
		{
			arrCount[number]++;
		}
	}

	for (int i = 0; i <= 100; i++)
	{
		if (arrCount[i] % 2 == 0 && arrCount[i] > 0)
		{
			std::cout << i << " ";
		}
	}
}