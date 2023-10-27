#include "main.h"
/**
 * factorial - gets the factorial of a given number
 * @n: number to be checked
 * Return: the number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
