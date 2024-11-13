#include <iostream>

int main()
{
    int N;

    std::cout << "Enter N: ";
    std::cin >> N;

    int count = 0;
    int num = 1;


    while (count < N)
    {
        for (int i = 0; i < num && count < N; i++)
        {
            std::cout << num << " ";
            count++;
        }
        num++;
    }
    std::cout << std::endl;
}
