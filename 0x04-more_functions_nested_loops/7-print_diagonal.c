#include "main.h"
/**
 * print_diagonal - prints diagonal using '\' character
 * @n: number of times '\' should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int row, space;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (space = 0; space < row; space++)
				_putchar(' ');
			_putchar('\\');

			if (row == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
