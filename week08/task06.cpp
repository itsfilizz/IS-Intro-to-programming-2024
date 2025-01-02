#include <iostream>

int main()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    if (n <= 0 && n >= 101)
    {
        std::cout << "Invalid input! ";
        return;
    }

    int arr[100];

    std::cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << arr[i] << " ";
        }
    }
}
