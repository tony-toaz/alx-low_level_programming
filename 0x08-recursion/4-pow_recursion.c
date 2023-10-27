#include "main.h"
/**
 * _pow_recursion - returns a number value raised to the power of another
 * @x: base value 1
 * @y: exponent value
 * Return: a number value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
