#include <stdio.h>

/**
 * _strchr - Returns a pointer to the first occurrence
 * of the character c in the string s, or NULL if the
 * character is not found
 * @s:string targeted
 * @c:character targeted
*
*Return: pointer to first occcurence of c
*/
char *_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
