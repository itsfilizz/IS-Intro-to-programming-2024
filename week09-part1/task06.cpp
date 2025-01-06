#include <iostream>

int main() 
{
    int arr[] = { 13, 15, 21, 42, 35 };
    int* ptr = arr;
   
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Element " << i << ": " << *(ptr + i) << std::endl;
    }
}
