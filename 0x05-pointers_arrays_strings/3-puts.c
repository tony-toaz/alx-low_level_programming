#include <unistd.h>
#include "main.h"

/**
 * _puts - prints a string to the standard output, followed by a newline
 * @str: the string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

