#include <iostream>

int sumOfDigits(int num) 
{
    if (num == 0) 
    {
        return 0;
    }
    return (num % 10) + sumOfDigits(num / 10);
}

int main()
{
    int number;
    std::cout << "Enter your number: ";
    std::cin >> number;

    std::cout << "Sum of " << number << " is: " << sumOfDigits(number) << std::endl;

}