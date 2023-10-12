#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int value_n = n;

	if (n < 0)
	{
		_putchar('-');
		value_n = -value_n;
	}

	if ((value_n / 10) > 0)
		print_number(value_n / 10);

	_putchar((value_n % 10) + '0');
}
