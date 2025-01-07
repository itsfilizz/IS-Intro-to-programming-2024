#include <iostream>

int fib(unsigned int n)
{
    if (n == 0) 
    {
        return 0;
    }

    if (n == 1) 
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int number;

    std::cout << "Enter your number: ";
    std::cin >> number;

    std::cout << "Result: " << fib(number);
}
