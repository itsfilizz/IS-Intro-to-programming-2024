#include <iostream>
#include <iomanip>

double calculateTotalCost(int peopleCount, double ticketPrice)
{
    double discount = 0.0;

    if (peopleCount >= 5 && peopleCount <= 10)
    {
        discount = 0.05;
    }
    else if (peopleCount >= 11 && peopleCount <= 20)
    {
        discount = 0.10;
    }
    else if (peopleCount >= 21)
    {
        discount = 0.15;
    }

    double totalCost = peopleCount * ticketPrice * (1 - discount);

    return totalCost;
}

int main()
{
    int peopeCount;
    double ticketPrice;

    double total;

    std::cout << "Enter the number of people: ";
    std::cin >> peopeCount;

    std::cout << "Enter the price of one ticket: ";
    std::cin >> ticketPrice;

    total = calculateTotalCost(peopeCount, ticketPrice);

    std::cout << "Total amount " << std::fixed << std::setprecision(2) << total << "lv." << std::endl;
}