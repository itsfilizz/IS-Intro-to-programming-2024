#include <iostream>

int main()
{
    int a, b, c;

    std::cin >> a >> b >> c;

    int maxNum = a;
    if (b > maxNum) {
        maxNum = b;
    }
    if (c > maxNum) {
        maxNum = c;
    }

    int minNum = a;
    if (b < minNum) {
        minNum = b;
    }
    if (c < minNum) {
        minNum = c;
    }

    std::cout << "Min num: " << minNum << std::endl;
    std::cout << "Max num: " << maxNum << std::endl;
}

