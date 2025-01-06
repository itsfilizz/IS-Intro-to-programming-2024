#include <iostream>

void modify(int* number) 
{
    *number *= 5;
}

int main() 
{
    int x = 10;

    std::cout << "Before: " << x << std::endl;

    modify(&x);

    std::cout << "After: " << x << std::endl;
}