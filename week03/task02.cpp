#include <iostream>

bool hasDivisor(int a, int b) 
{
    for (int i = 1; i * i <= a; i++) 
{
        if (a % i == 0) {
            
            if (b % (i * i) == 0) {
                return true;
            }
            
            int otherDivisor = a / i;
            if (otherDivisor != i && b % (otherDivisor * otherDivisor) == 0) {
                return true;
            }
        }
    }
    return false; 
}

int main() 
{
    int a, b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    if (hasDivisor(a, b)) 
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
}
