#include <iostream>
#include <cmath>

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

bool isPrime2(int a, int b)
{
    bool isP = false;
    if (isPrime(a) && isPrime(b))
    {
        int newA = a + 2;
        if (newA == b)
        {
            isP = true;
        }
        else
        {
            isP = false;
        }
    }
    else
    {
        isP = false;
    }

    return isP;
}
int main()
{
    int a, b;

    std::cin >> a >> b;

    std::cout << std::boolalpha << isPrime2(a, b);
}
