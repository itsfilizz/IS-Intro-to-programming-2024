#include <iostream>

double max(double x, double y)
{
	return (x > y) ? x : y;
}

double maxOfThree(double x, double y, double z)
{
	return max(max(x, y), z);
}

int main()
{
	int firstNum, secondNum, thirdNum;

	std::cout << "First number: ";
	std::cin >> firstNum;

	std::cout << "Second number: ";
	std::cin >> secondNum;

	std::cout << "Third number: ";
	std::cin >> thirdNum;

	std::cout << maxOfThree(firstNum, secondNum, thirdNum);
}
