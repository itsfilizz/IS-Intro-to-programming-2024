#include <iostream>

int main()
{
	int arr[5];

	std::cout << "Enter 5 numbers between 0 and 9: ";

	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
		if (arr[i] > 9 || arr[i] < 0)
			return -1;
	}

	int numberToSearch;

	std::cout << "Enter the number you want to search: ";
	std::cin >> numberToSearch;

	bool isFound = true;

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] != numberToSearch)
			isFound == false;
	}

	if (isFound)
	{
		std::cout << "Found!";
	}
	else
	{
		std::cout << "Not found!";
	}
}
