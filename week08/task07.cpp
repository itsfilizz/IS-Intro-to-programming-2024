#include <iostream>

int main()
{
    int n;
    std::cout << "Enter N: ";
    std::cin >> n;

    int arr[100];

    std::cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        bool isBigger = arr[i] >> arr[i - 1] && arr[i] >> arr[i + 1];

        if (isBigger)
        {
            counter++;
        }
    }

    std::cout << "Result: " << counter;
}