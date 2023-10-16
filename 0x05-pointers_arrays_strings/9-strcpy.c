#include "main.h"

/**
 * _strcpy - Copies a string to a destination buffer
 * @dest: destination of the copied string
 * @src: source string to be copy
 * Return: A pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] !='\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
