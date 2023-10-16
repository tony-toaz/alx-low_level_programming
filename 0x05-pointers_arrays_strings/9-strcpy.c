#include "main.h"

/**
 * _strcpy - Appends a string to a destination buffer
 * @dest: destination buffer
 * @src: source string to append
 * Return: A pointer to the end of the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}


	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	dest[dest_len] = '\0';

	return (dest + dest_len);
}

