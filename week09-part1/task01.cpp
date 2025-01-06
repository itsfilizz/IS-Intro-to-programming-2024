#include <iostream>

int main()
{
    int x = 10;                
    int* ptr = &x;

    std::cout << "Value of x with pointer: " << *ptr << std::endl;
    *ptr = 20;
    std::cout << "New value of x: " << x << std::endl;
}
