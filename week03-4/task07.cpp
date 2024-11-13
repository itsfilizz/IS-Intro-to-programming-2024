#include <iostream>

bool isAscending2(int a, int b)
{
    return a < b;
}

bool isAscending3(int a, int b, int c) 
{
    return a < b && b < c;
}

bool isAscending4(int a, int b, int c, int d) 
{
    return a < b && b < c && c < d;
}

bool isAscending5(int a, int b, int c, int d, int e) 
{
    return a < b && b < c && c < d && d < e;
}

int main()
{
    int input, a, b, c, d, e;
    std::cout << "How many numbers do you want to enter: ";
    std::cin >> input;

    switch (input)
    {
    case 2:
        std::cout << "Enter 2 numbers: ";
        std::cin >> a >> b;

        if (isAscending2(a,b))
        {
            std::cout << "Numbers are in ascending order!";
        }
        else
        {
            std::cout << "Numbers aren't in ascending order!";
        }
        break;

    case 3:
        std::cout << "Enter 3 numbers: ";
        std::cin >> a >> b >> c;

        if (isAscending3(a,b,c))
        {
            std::cout << "Numbers are in ascending order!";
        }
        else
        {
            std::cout << "Numbers aren't in ascending order!";
        }
        break;

    case 4:
        std::cout << "Enter 4 numbers: ";
        std::cin >> a >> b >> c >> d;

        if (isAscending4(a,b,c,d))
        {
            std::cout << "Numbers are in ascending order!";
        }
        else
        {
            std::cout << "Numbers aren't in ascending order!";
        }
        break;

    case 5:
        std::cout << "Enter 5 numbers: ";
        std::cin >> a >> b >> c >> d >> e;

        if (isAscending5(a,b,c,d,e))
        {
            std::cout << "Numbers are in ascending order!";
        }
        else
        {
            std::cout << "Numbers aren't in ascending order!";
        }
        break;

    default:
        std::cout << "Invalid!";
        break;
    }
}