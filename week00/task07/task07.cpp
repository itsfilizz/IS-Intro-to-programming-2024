#include <iostream>

int main()
{
	int x, a, b;

	std::cout << "Enter x: ";
	std::cin >> x;

	std::cout << "Enter interval [a, b]: ";
	std::cin >> a >> b;

	if (x >= a && x <= b)
	{
		std::cout << "True";
	}
	else
	{
		std::cout << "False";
	}
}