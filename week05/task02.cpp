#include <iostream>

bool isPrime(unsigned number)
{
    if (number <= 1)
    {
        return false;
    }
    double sqrtN = sqrt(number);
    for (unsigned i = 2; i < sqrtN; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;

    std::cin >> num;

    std::cout << isPrime(num);
}
