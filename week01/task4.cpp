#include <iostream>

int main()
{
	int a, b;

	std::cout << "Enter a: ";
	std::cin >> a;

	std::cout << "Enter b: ";
	std::cin >> b;

    if (a == 0) 
    {
        if (b == 0) 
        {
            std::cout << "INF" << std::endl;
        }
        else 
        {
            std::cout << "NO" << std::endl;
        }
    }
    else 
    {    
        int x = -b / a;
        
        if (a * x + b == 0) 
        {
            std::cout << x << std::endl;
        }
        else 
        {
            std::cout << "NO" << std::endl;
        }
    }
}