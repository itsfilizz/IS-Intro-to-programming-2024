#include <iostream>

int main()
{
    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    int biggestNegative = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int current;
        std::cin >> current;

        if (current < 0)
        {
            if (current > biggestNegative)
            {
                biggestNegative = current;
            }
        }
    }

    if (biggestNegative != INT_MIN)
    {
        std::cout << "Biggest negative: " << biggestNegative;
    }
    else
    {
        std::cout << "No negative.";
    }
}