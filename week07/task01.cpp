#include <iostream>

int main() 
{
    int arrLen;

    std::cout << "Enter array lenght: ";
    std::cin >> arrLen;

    int arr[1024];
   
    std::cout << "Enter array elements: ";
    for (int i = 0; i < arrLen; i++) 
    {
        std::cin >> arr[i];
    }

    std::cout << "Result: ";
    for (int i = arrLen - 1; i >= 0; i--)
    {
        std::cout << arr[i] << " ";
    }
}


