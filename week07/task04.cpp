//�������� ��������, ����� ������ 5 �� ���� ���� ����� � ���������[0, 9].
//���� � ��������� ���� �� �� �������, 
//���� ������������ �� ������� ����, ���� ����� � ���� ���� �������� ��� ��.������:

#include <iostream>

int main()
{
	int size = 5;
	int number;

	int arr[5];

	std::cout << "Enter 5 numbers between [0,9]: ";
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
		if (arr[i] < 0 && arr[i] > 9)
			break;
	}

	std::cout << "Enter the number you want to find: ";
	std::cin >> number;

	bool isFound = false;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == number)
		{
			isFound = true;
		}
	}

	std::cout << std::boolalpha << (isFound) ? "Found!" : "Not Found!";
}