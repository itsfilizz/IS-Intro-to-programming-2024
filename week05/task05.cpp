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

int main()
{
    int num;

    std::cin >> num;

    std::cout << reverseNumber(num);
}