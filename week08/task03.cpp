#include <iostream>

void multiplyMatrix(int rows, int cols, int matrix[][50], int multiplier) 
{
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            matrix[i][j] *= multiplier;
        }
    }
}

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

    int multiplier;
    std::cout << "Enter your multiplier (int): ";
    std::cin >> multiplier;

    multiplyMatrix(rows, cols, matrix, multiplier);

    std::cout << "New matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
