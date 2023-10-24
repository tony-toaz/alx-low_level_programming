#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches for a set of bytes in a string
 * @s: string to search from
 * @acceptr: string to search in s
 * Return: accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

			while (*a != '\0')
			{
				if (*s == *a)
			return (s);
		a++;
			}
		s++;
	}
	return (NULL);
}

