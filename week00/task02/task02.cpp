#include <iostream>

int main()
{
    int a, b;

    std::cout << "Enter a & b:" << std::endl;

    std::cin >> a >> b;

    //Първи начин с трета променлива
    int temp = a;
    a = b;
    b = temp;

    //Втори начин без трета променлива
    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "New a: " << a << std::endl << "New b: " << b;
}

