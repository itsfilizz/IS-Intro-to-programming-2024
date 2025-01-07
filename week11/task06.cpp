#include <iostream>

int findMin(int arr[], int size) 
{
    if (size == 1) 
    {
        return arr[0];
    }

    int minOfRest = findMin(arr + 1, size - 1);

    if (arr[0] < minOfRest)
    {
        return arr[0];  
    }
    else 
    {
        return minOfRest; 
    }
}

int main()
{
    int size;
    std::cout << "Enter the size of your array: ";
    std::cin >> size;

    int arr[1024];

    std::cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    int minElement = findMin(arr, size);
    std::cout << "Result: " << minElement << std::endl;
}