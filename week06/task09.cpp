#include <iostream>

int grade(int num)
{
	if (num >= 91 && num <= 100)
	{
		std::cout << "A";
	}
	else if (num >= 81 && num <= 90)
	{
		std::cout << "B";
	}
	else if (num >= 71 && num <= 80)
	{
		std::cout << "C";
	}
	else if (num >= 61 && num <= 70)
	{
		std::cout << "D";
	}
	else if (num >= 51 && num <= 60)
	{
		std::cout << "E";
	}
	else if (num >= 41 && num <= 50)
	{
		std::cout << "F";
	}
	else
	{
		std::cout << "Invalid!";
	}
}

int main()
{
	int gradeInput;

	std::cout << "Enter grade: [0,100]";
	std::cin >> gradeInput;

	grade(gradeInput);
}

