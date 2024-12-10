#include <iostream>

int myAbs(int x)
{
	return x < 0 ? -x : x;
}

int min(int x, int y)
{
	return (x < y) ? x : y;
}

int max(int x, int y)
{
	return (x > y) ? x : y;
}

int minOfThree(int x, int y, int z)
{
	return min(min(x, y), z);
}

int maxOfThree(int x, int y, int z)
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

bool isEven(int num)
{
	return (num % 2 == 0);
}

bool isOdd(int num)
{
	return (num % 2 != 0);
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