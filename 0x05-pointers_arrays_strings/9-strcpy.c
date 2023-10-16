#include "main.h"

/**
 * _strcat - Concatenates the source string to the destination string
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be concatenated.
 * Return: A pointer to the destination buffer (dest).
 */
char *_strcpy(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;
	int i, j;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[src_len] != '\0')
	{
		src_len++;
	}

	for (i = 0, j = dest_len; i < src_len; i++, j++)
	{
		dest[j] = src[i];
	}

	dest[dest_len + src_len] = '\0';
	return (dest);
}
