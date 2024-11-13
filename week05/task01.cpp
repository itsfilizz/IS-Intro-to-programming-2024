#include <iostream>

int fact(int number)
{
    int result = 1;
    for (int i = 1; i <= number; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int number;
    std::cin >> number;

    std::cout << fact(number);
}