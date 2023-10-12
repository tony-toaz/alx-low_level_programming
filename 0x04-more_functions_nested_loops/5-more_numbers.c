#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int number, count;

	for (count = 0; count <= 9; count++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
