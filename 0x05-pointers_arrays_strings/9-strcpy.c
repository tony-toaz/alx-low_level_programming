#include "main.h"

/**
 * *_strcpy - Copies a string pointed to by @src, including the
 * terminating null byte, to a buffer pointed to by @dest
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be concatenated.
 * Return: A pointer to the destination buffer (dest).
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
