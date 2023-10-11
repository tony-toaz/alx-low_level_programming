#include "main.h"

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int first = 1;
	int second = 2;
	int next;
	int count = 0;

	_putchar(first + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(second + '0');
	count += 2;

	while (count < 98)
	{
		next = first + second;
		_putchar(',');
		_putchar(' ');
		int temp = next;
		int numDigits = 0;

		while (temp > 0)
		{
			temp /= 10;
			numDigits++;
		}
		temp = next;
		while (numDigits > 0)
		{
			_putchar(temp / power(10, numDigits - 1) + '0');
			temp %= power(10, numDigits - 1);
			numDigits--;
		}
		count++;

		first = second;
		second = next;
	}

	_putchar('\n');
	return (0);
}
