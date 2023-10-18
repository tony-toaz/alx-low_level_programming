#include "main.h"

/**
 * _strlen - Calculate the length of a string
 * @s: a pointer to a null-terminated string
 * Return: the calculated length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
