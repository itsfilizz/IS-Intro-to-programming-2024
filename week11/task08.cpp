#include <iostream>
#include <cctype>

void evaluate(const char* str,int& lowercaseCount, int& uppercaseCount, int& digitsCount)
{   

    for (int i = 0; str[i] != '\0'; ++i) 
    {
        if (std::islower(str[i]))
        {
            lowercaseCount++;
        }
        else if (std::isupper(str[i]))
        {
            uppercaseCount++;
        }
        else if (std::isdigit(str[i]))
        {
            digitsCount++;
        }
    }
}

int main()
{
    char str[100];
    std::cout << "Enter text: ";
    std::cin >> str;

    int lowercaseCount = 0, uppercaseCount = 0, digitCount = 0;

    if (str == nullptr)
    {
        return false;
    }

    evaluate(str, lowercaseCount, uppercaseCount, digitCount);

    std::cout << "Lower case count: " << lowercaseCount << std::endl;
    std::cout << "Upper case count: " << uppercaseCount << std::endl;
    std::cout << "Digits count: " << digitCount << std::endl;
}
