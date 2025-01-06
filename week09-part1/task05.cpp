#include <iostream>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 15;
    int y = 51;

    std::cout << "Value of: x = " << x << ", y = " << y << std::endl;
    swap(&x, &y);
    std::cout << "New value of: x = " << x << ", y = " << y << std::endl;
}