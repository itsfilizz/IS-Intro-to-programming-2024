#include <iostream>

bool areEqual(char* str1, char* str2) 
{
    if (*str1 == '\0' && *str2 == '\0')
    {
        return true;
    }
    if (*str1 != *str2) 
    {
        return false;
    }

    return areEqual(str1 + 1, str2 + 1);
}

int main()
{
    char str1[100];
    std::cout << "Enter first string: ";
    std::cin >> str1;

    char str2[100];
    std::cout << "Enter second string: ";
    std::cin >> str2;

    std::cout << "Result: " << (areEqual(str1, str2) ? "YES" : "NO");
}