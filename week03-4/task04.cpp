#include <iostream>

int func(int num)
{
	return num * num;
}

int main()
{
	int num;
	std::cin >> num;

	std::cout << func(num);
}