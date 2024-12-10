#include <iostream>
#include <cstring>
#include <cctype>

int main()
{
    char arr[] = "i love fmi";

	for (size_t i = 0; i < std::strlen(arr); i++)
	{
		arr[i] = std::toupper(arr[i]);
	}

	std::cout << arr;
}

