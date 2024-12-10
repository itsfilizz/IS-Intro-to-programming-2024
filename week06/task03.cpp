#include <iostream>

double discount(double x, double y)
{
    double discount = y / 100;
    return discount * x;
}

int main()
{
    double x, y;

    std::cout << "Price: ";
    std::cin >> x;

    std::cout << "Discount: ";
    std::cin >> y;

    std::cout << "New price: ";
    std::cout << discount(x, y);
}
