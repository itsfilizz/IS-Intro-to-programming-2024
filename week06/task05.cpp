#include <iostream>

int myFac(int num)
{
	int res = 1;

	for (int i = 1; i <= num; ++i)
	{
		res *= i;
	}

	return res;
}

int main()
{
	int num;
	std::cout << "Enter your number: ";
	std::cin >> num;

	std::cout << "Factorial: " << myFac(num);
}