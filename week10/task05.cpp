#include <iostream>

unsigned myStrlen(const char* str)
{
	if (!str)
		return 0;

	unsigned result = 0;
	while (*str)
	{
		result++;
		str++;
	}
	return result;
}

void myStrcpy(const char* source, char* dest)
{
	if (!source || !dest)
		return;
	while (*source)
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

void myStrcat(char* first, const char* second)
{
	if (!first || !second)
		return;

	size_t firstLen = myStrlen(first);
	first += firstLen;
	myStrcpy(second, first);
}

int main()
{
	char firstArray[100];
	char secondArray[100];

	std::cout << "Enter the first array: ";
	std::cin.getline(firstArray, 100);

	std::cout << "Enter the second array: ";
	std::cin.getline(secondArray, 100);

	myStrcat(firstArray, secondArray);

	std::cout << "Concated array: ";
	std::cout << firstArray;
}
