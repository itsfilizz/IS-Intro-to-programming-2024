#include <iostream>

int number(int x)
{
    int originalNumber = x;

    if (x % 2 == 0)
    {
        x -= 1;
    }
    else if (x % 2 != 0)
    {
        x -= 3;
    }

    if (x > 10)
    {
        x %= 10;
    }
    else if (x <= 10)
    {
        x *= 10;
    }

    return x;
}

int main()
{
    int arr[1024];

    int arrLen;

    std::cout << "Enter array lenght: ";
    std::cin >> arrLen;

    std::cout << "Enter elements: ";
    for (size_t i = 0; i < arrLen; i++)
    {
        std::cin >> arr[i];
    }

    for (size_t i = 0; i < arrLen; i++)
    {
        int currentNumber = number(arr[i]);
        std::cout << currentNumber << " ";
    }
}