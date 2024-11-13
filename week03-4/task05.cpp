#include <iostream>

int main()
{
	int deposit = 500; //example
	int input,i;

	std::cout << "Enter the operation/ 1-deposit, 2-withdraw, 3-checkBalance/: ";
	std::cin >> i;

	switch (i)
	{
	case 1:
		std::cout << "Enter the amount you want to deposit: ";
		std::cin >> input;
		deposit += input;
		std::cout << "Current amount: " << deposit;
		break;
	case 2:
		std::cout << "Enter the amount you want to withdraw: ";
		std::cin >> input;
		deposit -= input;
		std::cout << "Current amount: " << deposit;
		break;
	case 3:
		std::cout << "Your amount is: " << deposit;
		break;
	default:
		std::cout << "Invalid!";
		break;
	}
}
