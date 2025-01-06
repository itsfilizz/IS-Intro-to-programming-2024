#include <iostream>

int* copyArray(const int* arr, int size)
{
    int* new_arr = new int[size];

    for (int i = 0; i < size; ++i) 
    {
        new_arr[i] = arr[i];
    }
    return new_arr;
}

int main() 
{
    int size = 6;
    int arr[] = { 32, 45, 24, 76, 54, 44 };

    int* copied_arr = copyArray(arr, size);

    for (int i = 0; i < size; ++i)
    {
        std::cout << copied_arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] copied_arr;
}
