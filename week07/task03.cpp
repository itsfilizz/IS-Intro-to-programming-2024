#include <iostream>

int secondLargestNumber(const int arr[], unsigned size)
{
    int max = arr[0];
    int max2 = arr[0];

    for (unsigned i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
        }
    }
    return max2;
}

int secondSmallestNumber(const int arr[], unsigned size)
{
    int min = arr[0];
    int min2 = arr[0];

    for (unsigned i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min2 = min;
            min = arr[i];
        }
        else if (arr[i] < min2)
        {
            min2 = arr[i];
        }
    }
    return min2;
}


int main()
{
    int arr[1024];

    int arrLen;
    std::cout << "Enter array lenght: ";
    std::cin >> arrLen;

    std::cout << "Enter array elements: ";
    for (int i = 0; i < arrLen; i++)
    {
        std::cin >> arr[i];
    }

    int secondLargest = secondLargestNumber(arr, arrLen);
    int secondSmallest = secondSmallestNumber(arr, arrLen);

    std::cout << "Second largest number is: " << secondLargest << std::endl;
    std::cout << "Second smallest number is: " << secondSmallest << std::endl;
   
}