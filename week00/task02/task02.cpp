#include <iostream>

int main()
{
    int a, b;

    std::cout << "Enter a & b:" << std::endl;

    std::cin >> a >> b;

    //����� ����� � ����� ����������
    int temp = a;
    a = b;
    b = temp;

    //����� ����� ��� ����� ����������
    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "New a: " << a << std::endl << "New b: " << b;
}

