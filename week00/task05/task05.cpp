#include <iostream>

int main()
{
    unsigned a, b, c;

    std::cout << "Enter a: ";
    std::cin >> a;

    std::cout << "Enter b: ";
    std::cin >> b;

    std::cout << "Enter c: ";
    std::cin >> c;

    if (a + b > c && a + c > b && b + c > a )
    {
        std::cout << "True";
    }
    else
    {
        std::cout << "False";
    }
}