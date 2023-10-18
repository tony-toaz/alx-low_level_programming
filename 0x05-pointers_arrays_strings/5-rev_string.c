#include "main.h"
/**
 * rev_string - modifies the input string by reversing it in-place
 * @s: a pointer to the string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
