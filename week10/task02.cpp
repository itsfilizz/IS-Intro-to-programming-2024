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

int main()
{
    char arr[100];
    std::cout << "Enter a string: ";
    std::cin.getline(arr, 100);

    std::cout << "The length of the string is: " << myStrlen(arr);
}
