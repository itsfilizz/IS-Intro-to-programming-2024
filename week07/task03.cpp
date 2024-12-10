#include <iostream>

int main()
{
    int numbersCount;
    std::cout << "Enter numbers count: ";
    std::cin >> numbersCount;

    int arrNum[1024];
    int bigNumbers[1024];

    for (int i = 0; i < numbersCount; i++)
    {
        std::cin >> arrNum[i];
    }

    int maxNumber = INT_MIN;
    int countLen = 0;

    for (int i = 0; i < numbersCount; i++)
    {
        if (arrNum[i]>maxNumber)
        {
            bigNumbers[i] = arrNum[i];
            countLen++;
        }
    }

    int counter = 0;
    for (size_t i = 0; i < countLen; i++)
    {
        if (bigNumbers[i] > maxNumber)
        {
            counter++;
        }
        if (counter == 2)
        {
            std::cout << bigNumbers[i];
            break;
        }
    }
}

//Напишете програма подобна на задача 1. Нека този път в конзолата бъде 
//изведено второто най - голямо и второто най - малко число от масива.Пример:
//
//// Вход:
//6   // n
//4
//2
//3
//1
//5
//6
//// Изход:
//5 2

