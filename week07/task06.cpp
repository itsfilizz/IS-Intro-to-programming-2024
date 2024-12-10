#include <iostream>

long long toBinary(int num)
{
    long long res = 0;
    long long acc = 1;
    while (num != 0)
    {
        res += (num % 2) * acc;
        acc *= 10;
        num /= 2;
    }
    return res;
}

int main() 
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int copyOfNumber = number;

    bool binary[32]; 
    int acc = 0;

    while (number > 0) 
    {
        binary[acc] = number % 2;  
        number /= 2;  
        acc++;
    }

    std::cout << "Binary representation: ";
    for (int j = acc - 1; j >= 0; j--)
    {
        std::cout << binary[j];
    }

    std::cout << std::endl;

    std::cout << "Binary representation with function: ";
    std::cout << toBinary(copyOfNumber);
}
