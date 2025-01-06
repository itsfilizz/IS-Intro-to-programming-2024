#include <iostream>

int main()
{
    int* ptr = new int;

    *ptr = 13;

    std::cout << "Value of ptr is: " << *ptr << std::endl;

    delete ptr;
}
