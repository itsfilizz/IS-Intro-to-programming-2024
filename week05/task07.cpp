#include <iostream>

int reverseNumber(int n)
{
    int reversed = 0;

    while (n != 0)
    {
        int digit = n % 10;
        (reversed *= 10) += digit;
        n /= 10;
    }

    return reversed;
}

bool isPalindrome(int n)
{
    return n == reverseNumber(n);
}

int main()
{
    int number;

    std::cin >> number;

    std::cout << std::boolalpha << isPalindrome(number);
}
