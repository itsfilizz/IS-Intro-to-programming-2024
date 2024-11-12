#include <iostream>

int main()
{
    int a, n;

    std::cout << "Enter a: ";
    std::cin >> a;

    std::cout << "Enter n: ";
    std::cin >> n;

    int result = 1;

    for (size_t i = 0; i < n; i++)
    {
        result *= a;
    }

    std::cout << "Result: " << result;
}