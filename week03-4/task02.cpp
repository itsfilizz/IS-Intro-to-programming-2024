#include <iostream>

double min(double x, double y)
{
	return (x < y) ? x : y;
}

double max(double x, double y)
{
	return (x > y) ? x : y;
}

double minOfThree(double x, double y, double z)
{
	return min(min(x, y), z);
}

double maxOfThree(double x, double y, double z)
{
	return max(max(x, y), z);
}

bool is_alpha(char ch)
{
	return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

bool isDigit(char ch)
{
	return (ch >= 0 && ch <= 9);
}

int myPow(int base, int exponent)
{
	int result = 1;

	for (int i = 0; i < exponent; ++i)
	{
		result *= base;
	}
	return result;
}

int main()
{

}