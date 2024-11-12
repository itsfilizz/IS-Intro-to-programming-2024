#include <iostream>

int main()
{
	char ch;
	int a, b, result;

	std::cout << "Enter your choice -> +, - , * , / " << std::endl;
	std::cin >> ch;
	switch (ch)
	{
	case '+':
		std::cout << "Enter a & b: " << std::endl;
		std::cin >> a >> b;
		std::cout << "Result: ";
		result = a + b;
		std::cout << result;
		break;

	case '-':
		std::cout << "Enter a & b: " << std::endl;
		std::cin >> a >> b;
		std::cout << "Result: " << std::endl;
		result = a - b;
		std::cout << result;
		break;

	case '*':
		std::cout << "Enter a & b: " << std::endl;
		std::cin >> a >> b;
		std::cout << "Result: " << std::endl;
		result = a * b;
		std::cout << result;
		break;

	case '/':
		std::cout << "Enter a & b: " << std::endl;
		std::cin >> a >> b;
		std::cout << "Result: " << std::endl;
		result = a / b;
		std::cout << result;
		break;

	default:
		std::cout << "Invalid!" << std::endl;
		break;
	}
}
