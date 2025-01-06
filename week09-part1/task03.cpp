#include <iostream>

int main()
{
    int* ptr = nullptr;

    if (ptr == nullptr) 
    {
        std::cout << "Pointer is null." << std::endl;
    }

    int x = 10;
    ptr = &x;

    std::cout << "The pointer points to a value: " << *ptr << std::endl;
}
