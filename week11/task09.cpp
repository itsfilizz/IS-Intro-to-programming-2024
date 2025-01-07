#include <iostream>

bool swapcase(char* str) 
{
    if (str == nullptr)
    {
        return false; 
    }

    for (int i = 0; str[i] != '\0'; ++i) 
    {
        if (std::islower(str[i]))
        {
            str[i] = std::toupper(str[i]); 
        }
        else if (std::isupper(str[i])) 
        {
            str[i] = std::tolower(str[i]);
        }
    }

    return true;
}

int main()
{
    char str[100];
    std::cout << "Enter text: ";
    std::cin >> str;

    swapcase(str);

    std::cout << "Result: " << str;

}
