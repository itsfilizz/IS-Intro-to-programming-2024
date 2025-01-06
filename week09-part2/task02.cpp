#include <iostream>

int* resizeArray(int* arr, int oldSize, int newSize)
{
    int* new_arr = new int[newSize];

    for (int i = 0; i < oldSize && i < newSize; ++i)
    {
        new_arr[i] = arr[i];
    }

    delete[] arr;
    return new_arr;
}

int main()
{
    int oldSize = 5;
    int* arr = new int[oldSize] {5, 4, 3, 2, 1};

    int newSize = 3;
    int* resized_arr = resizeArray(arr, oldSize, newSize);

    for (int i = 0; i < newSize; ++i)
    {
        std::cout << resized_arr[i] << " ";
    }

    std::cout << std::endl;

    delete[] resized_arr;
}
