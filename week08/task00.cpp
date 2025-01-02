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

    int sumAboveMain = 0, sumBelowMain = 0, sumAboveSecondary = 0, sumBelowSecondary = 0;

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            if (j > i) 
            {
                sumAboveMain += matrix[i][j];
            }
            if (j < i)
            {
                sumBelowMain += matrix[i][j];
            }
            if (j < rows - i - 1) 
            {
                sumAboveSecondary += matrix[i][j];
            }
            if (j > rows - i - 1) 
            {
                sumBelowSecondary += matrix[i][j];
            }
        }
    }
    std::cout << "Sum above main diagonal: " << sumAboveMain << std::endl;
    std::cout << "Sum below main diagonal: " << sumBelowMain << std::endl;
    std::cout << "Sum above secondary diagonal: " << sumAboveSecondary << std::endl;
    std::cout << "Sum below secondary diagonal: " << sumBelowSecondary << std::endl;
}
