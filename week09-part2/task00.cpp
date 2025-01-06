#include <iostream>

int* createHalfArray(int* arr, int size) 
{   
    int newSize = size / 2;    
    int* newArr = new int[newSize];
   
    for (int i = 0; i < newSize; i++)
    {
        newArr[i] = arr[i];
    }
   
    return newArr;
}

int main() 
{  
    int arr[] = { 13, 15, 21, 5, 8, 61, 43, 85 };
    int size = 8; 

    int* halfArr = createHalfArray(arr, size);

    std::cout << "Result: ";

    for (int i = 0; i < size / 2; i++) 
    {
        std::cout << halfArr[i] << " ";
    }

    delete[] halfArr;
}