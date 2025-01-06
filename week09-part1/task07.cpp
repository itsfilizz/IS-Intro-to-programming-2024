#include <iostream>

int main()
{
    int num = 13;
    int* ptr = &num; 
    int** ptr2 = &ptr;
    std::cout << "Original value of x: " << **ptr2;
}