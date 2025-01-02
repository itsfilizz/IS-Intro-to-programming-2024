#include <iostream>

int main()
{
	int arr[100];
	int n;

	std::cout << "Enter the amount of numbers you want to enter: ";
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	std::cout << "-------" << std::endl;
	for (; n > 0; n--)
	{
		std::cout << arr[n - 1] << " ";
	}
}