#include <iostream>
#include <cmath>
#include <iomanip>

double calculateDistance(int x1, int y1, int x2, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double calculatePerimeter(int x1, int y1, int x2, int y2, int x3, int y3)
{
    double sideA = calculateDistance(x1, y1, x2, y2);
    double sideB = calculateDistance(x2, y2, x3, y3);
    double sideC = calculateDistance(x3, y3, x1, y1);

    double P = sideA + sideB + sideC;

    return P;
}

int main()
{
    int x1, y1, x2, y2, x3, y3;

    std::cout << "Enter (x1 y1): ";
    std::cin >> x1 >> y1;

    std::cout << "Enter (x2 y2): ";
    std::cin >> x2 >> y2;

    std::cout << "Enter (x3 y3): ";
    std::cin >> x3 >> y3;

    double P = calculatePerimeter(x1, y1, x2, y2, x3, y3);

    std::cout << "Perimeter is: " << std::fixed << std::setprecision(3) << P << std::endl;
}