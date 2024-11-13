#include <iostream>

int gcd(int a, int b) 
{
    if (a < b)
    {
        int c = a;
        a = b;
        b = c;
    }
    while (b != 0)
    {
        int newB = a % b;
        a = b;
        b = newB;
    }

    return a;  
}

int main()
{
    int a, b;

    std::cin >> a >> b;

    std::cout << gcd(a, b);
}