#include <iostream>

bool isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int year;

    std::cin >> year;

    std::cout << isLeapYear(year);
}
