#include <iostream>

int main()
{
    int number;

    std::cout << "Enter number: ";
    std::cin >> number;

    int sum = 0;

    while (number > 0)
    {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    std::cout << "Sum: " << sum << std::endl;
}