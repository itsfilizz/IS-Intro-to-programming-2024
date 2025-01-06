#include <iostream>

int main()
{
    char str[100];

    std::cout << "Enter a string: ";
    std::cin.getline(str, 100); 

    std::cout << "You entered: " << str << std::endl;
}