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

    int maxSum = 0;
    for (int j = 0; j < cols; ++j)
    {
        int columnSum = 0;
        for (int i = 0; i < rows; ++i)
        {
            columnSum += matrix[i][j];
        }

        std::cout << "Sum of current col " << j + 1 << " is: " << columnSum << std::endl;

        if (columnSum > maxSum) 
        {
            maxSum = columnSum;
        }
    }

    std::cout << "Max sum is: " << maxSum;
}