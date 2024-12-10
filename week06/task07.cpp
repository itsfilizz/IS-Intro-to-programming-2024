#include <iostream>
#include <cmath>
#include <iomanip>

int calculateDistance(int x1, int y1, int x2, int y2)
{
	double result = std::sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	return std::round(result * 1000.0) / 1000.0;;
}

int main()
{
	int x1, x2, y1, y2;

	std::cout << "Enter x1 & y1: " << std::endl;
	std::cin >> x1 >> y1;

	std::cout << "Enter x2 & y2: " << std::endl;
	std::cin >> x2 >> y2;

	double distance = calculateDistance(x1, y1, x2, y2);
	std::cout << "Distance: " << std::fixed << std::setprecision(3) << distance << std::endl;
}