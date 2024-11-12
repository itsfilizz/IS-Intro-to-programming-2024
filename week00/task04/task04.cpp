#include <iostream>

int main()
{
	unsigned a, b;

	std::cin >> a >> b;

	unsigned sum = a * b;

	int firstDigit = sum / 100;
	int secondDigit = (sum / 10) % 10;
	int thirdDigit = sum % 10;

	std::cout << "Sum: " << sum << std::endl;

	if (thirdDigit % 2 == 0)
	{
		std::cout << "1";
	}
	else
	{
		std::cout << "0";
	}
}