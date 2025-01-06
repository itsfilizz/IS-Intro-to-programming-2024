#include <iostream>

int main()
{
    int teachersCount;
    std::cout << "Enter the number of teachers: ";
    std::cin >> teachersCount;

    int* gradesPerTeacher = new int[teachersCount];
    int** gradeSlots = new int* [teachersCount];

    for (int i = 0; i < teachersCount; ++i)
    {
        std::cout << "Enter the number of grades for Teacher " << i + 1 << ": ";
        std::cin >> gradesPerTeacher[i];
        gradeSlots[i] = new int[gradesPerTeacher[i]];

        std::cout << "Enter the grades for Teacher " << i + 1 << ": ";
        for (int j = 0; j < gradesPerTeacher[i]; ++j)
        {
            std::cin >> gradeSlots[i][j];
        }
    }

    for (int i = 0; i < teachersCount; ++i)
    {
        std::cout << "Grades for Teacher " << i + 1 << ": ";

        for (int j = 0; j < gradesPerTeacher[i]; ++j)
        {
            std::cout << gradeSlots[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < teachersCount; ++i)
    {
        delete[] gradeSlots[i];
    }
    delete[] gradeSlots;
    delete[] gradesPerTeacher;
}
