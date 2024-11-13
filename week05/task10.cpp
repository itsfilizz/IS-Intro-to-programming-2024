#include <iostream>

void minMax(int arr[], int n, int& min, int& max) 
{
    if (n <= 0) 
    {
        std::cout << "Array is empty or invalid size." << std::endl;
        return;
    }

    min = arr[0];
    max = arr[0];

    for (int i = 1; i < n; ++i) 
    {
        if (arr[i] < min) 
        {
            min = arr[i];
        }
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
}

int main()
{

}
