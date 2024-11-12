#include <iostream>

int main()
{
	int number;
	std::cin >> number;
	
	int firstDigit = number / 100;        
	int secondDigit = (number / 10) % 10; 
	int thirdDigit = number % 10;

	int sum = firstDigit + secondDigit + thirdDigit;

	std::cout << "First digit: " << firstDigit << std::endl;
	std::cout << "Second digit: " << secondDigit << std::endl;
	std::cout << "Third digit: " << thirdDigit << std::endl;

	std::cout << "Sum: " << sum;
}