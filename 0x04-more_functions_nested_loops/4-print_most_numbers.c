#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int my_num;

	for (my_num = 0; my_num <= 9; my_num++)
	{
		if (my_num != 2 && my_num != 4)
			_putchar((my_num % 10) + '0');
	}

	_putchar('\n');
}
