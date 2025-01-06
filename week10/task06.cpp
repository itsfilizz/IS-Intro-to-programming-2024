#include <iostream>

int myStrcmp(const char* first, const char* second)
{
	if (!first || !second)
		return 0;

	while ((*first) && (*second) && ((*first) == (*second)))
	{
		first++;
		second++;
	}

	return (*first - *second);
}

int main()
{
	char firstArray[100];
	char secondArray[100];

	std::cout << "Enter the first array: ";
	std::cin.getline(firstArray, 100);

	std::cout << "Enter the second array: ";
	std::cin.getline(secondArray, 100);

	int result = myStrcmp(firstArray, secondArray);

	if (result < 0)
	{
		std::cout << "Second array is greater.";
	}
	else if (result == 0)
	{
		std::cout << "First array is equal with second array.";
	}
	else if (result > 0)
	{
		std::cout << "First array is greater.";
	}
	else
	{
		std::cout << "Error!";
	}
}