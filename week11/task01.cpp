#include <iostream>

int recStrlen(const char* str)
{
    if (*str == '\0')
    {
        return 0; 
    }
    return 1 + recStrlen(str + 1); 
}

int main()
{
    char str[100];
    std::cout << "Enter text: ";
    std::cin >> str;

    std::cout << "Length: " << recStrlen(str) << std::endl;
}