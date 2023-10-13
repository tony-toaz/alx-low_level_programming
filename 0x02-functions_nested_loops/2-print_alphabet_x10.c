#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alpha_lower;

	for (count = 0; count < 10; count++)
	{
		for (alpha_lower = 'a'; alpha_lower <= 'z'; alpha_lower++)
			_putchar(alpha_lower);
		_putchar('\n');
	}
}
