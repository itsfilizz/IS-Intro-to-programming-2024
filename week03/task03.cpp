#include <iostream>

bool checkIfCanBuy(bool type, bool hasAC, int horsePower, int mileage, int price)
{
    bool canBuy = false;

    if (type == 1)
    {
        if (hasAC)
        {
            canBuy = (horsePower >= 70) && (mileage < 115000) && (price <= 6000);
        }
        else
        {
            canBuy = (horsePower >= 60) && (mileage < 180000) && (price <= 2000);
        }
    }
    else if (type == 0)
    {
        canBuy = (horsePower >= 70) && (horsePower <= 90) && (price <= 25000);
    }
    return canBuy;
}

int main()
{
    bool type;
    bool hasAC;
    int horsePower;
    int mileage;
    int price;

    std::cout << "Car type (old - 0/new - 1): ";
    std::cin >> type;

    std::cout << "Is there air conditioning? (1 - yes, 0 - no): ";
    std::cin >> hasAC;

    std::cout << "Enter the car's power (horsepower): ";
    std::cin >> horsePower;

    std::cout << "Enter car mileage (km): ";
    std::cin >> mileage;

    std::cout << "Enter the price of the car (BGN): ";
    std::cin >> price;

    bool canBuy = checkIfCanBuy(type, hasAC, horsePower, mileage, price);

    if (canBuy)
    {
        std::cout << "Traicho would buy the car." << std::endl;
    }
    else
    {
        std::cout << "Traicho wouldn't buy the car." << std::endl;
    }
}