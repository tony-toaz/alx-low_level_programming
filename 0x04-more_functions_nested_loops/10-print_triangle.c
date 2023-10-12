#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #
 * @size: The size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int hash, spaces;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (spaces = size - hash; spaces > 0; spaces--)
				_putchar(' ');

			for (spaces = 0; spaces < hash; spaces++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}



