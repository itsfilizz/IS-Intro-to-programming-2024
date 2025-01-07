#include <iostream>

int factRec(int n) 
{
    if (n < 0) 
    {
        return 0;
    }
    if (n == 0 || n == 1) 
    {
        return 1;
    }
    return n * factRec(n - 1);
}

int main()
{
    int number;
    std::cout << "Enter your number: ";
    std::cin >> number;

    std::cout << "Factorial of " << number << " is " << factRec(number) << std::endl;
}
