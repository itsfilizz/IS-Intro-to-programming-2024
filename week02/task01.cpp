#include <iostream>

int main()
{
    int i;
    std::cout << "Enter i: ";
    std::cin >> i;

    int ai = i * i + 3 * i;
    std::cout << "a_" << i << " is: " << ai << std::endl;
}