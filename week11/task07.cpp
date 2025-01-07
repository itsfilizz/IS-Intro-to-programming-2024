#include <iostream>

void toBinary(int n)
{
    if (n == 0) 
    {
        return;
    }
    
    toBinary(n / 2);

    std::cout << n % 2;
}

int main()
{
    int number;

    std::cout << "Enter your number: ";
    std::cin >> number;

    std::cout << "Result: ";
    toBinary(number);
}
