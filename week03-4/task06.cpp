#include <iostream>

int main() 
{
    long long N;
    int C, count = 0;

    std::cout << "Enter N (1000 <= N <= 999999999): ";
    std::cin >> N;
    std::cout << "Enter C (0 <= C <= 9): ";
    std::cin >> C;
   
    if (N < 1000 || N > 999999999 || C < 0 || C > 9) 
    {
        std::cout << "Invalid!" << std::endl;
        return 1;
    }

    while (N > 0) 
    {
        int digit = N % 10; 
        if (digit == C) 
        {
            count++;
        }
        N /= 10;
    }

    std::cout << "Digit " << C << " -> " << count << " times." << std::endl;

    return 0;
}
