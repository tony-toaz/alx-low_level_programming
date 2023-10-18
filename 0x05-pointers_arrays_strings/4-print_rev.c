#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	if (s == NULL)
	{
		printf("Error: Null pointer.\n");
		return;
	}
	while (s[i] != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}

	_putchar('\n');
}
