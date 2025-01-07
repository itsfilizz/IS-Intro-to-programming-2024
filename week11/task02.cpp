#include <iostream>

int reverseRecursive(int n, int reversed = 0) 
{
    if (n == 0) 
        return reversed; 

    return reverseRecursive(n / 10, reversed * 10 + n % 10);
}

int main()
{
    int number;
    std::cout << "Enter your number: ";
    std::cin >> number;

    std::cout << "Reversed number: " << reverseRecursive(number) << std::endl;
}

