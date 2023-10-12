#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9
 * Return: void
 */
void print_numbers(void)
{
	int my_num;

	for (my_num = 0; my_num <= 9; my_num++)
		_putchar((my_num % 10) + '0');

	_putchar('\n');
}
