#include <iostream>

void sum(int x, int y)
{
    std::cout << "Calculating!" << std::endl;
    int sum = x + y;
    std::cout << sum;
}

int main()
{
    int x, y;
    std::cin >> x >> y;

    sum(x, y);
}
