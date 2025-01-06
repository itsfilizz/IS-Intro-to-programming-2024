#include <iostream>

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

int main()
{
    char source[100];
    char dest[100];

    std::cout << "Enter a string: ";
    std::cin.getline(source, 100);

    myStrcpy(source, dest);

    std::cout << "Copied string: " << dest;
}
