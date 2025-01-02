#include <iostream>

int main() 
{
    int rows, cols;
    std::cout << "Enter rows and cols: ";
    std::cin >> rows >> cols;

    int matrix[50][50];

    std::cout << "Enter your matrix: " << std::endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
    
    std::cout << "Odd numbers: "
;   for (int i = 1; i < rows; i += 2) 
    { 
        for (int j = 0; j < cols; ++j) 
        {
            if (matrix[i][j] % 2 != 0) 
            { 
                std::cout << matrix[i][j] << " ";
            }
        }
    }
}
