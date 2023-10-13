#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int number, multiplication, product;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (multiplication = 1; multiplication <= 9; multiplication++)
		{
			_putchar(',');
			_putchar(' ');

			product = number * multiplication;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
