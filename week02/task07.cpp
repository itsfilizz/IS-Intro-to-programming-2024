#include <iostream>

int main()
{
    for (char letter = 'A'; letter <= 'Z'; letter++)
    {
        if (letter != 'A' && letter != 'E' && letter != 'I' && letter != 'O' && letter != 'U')
        {
            std::cout << letter << " ";
        }
    }
}