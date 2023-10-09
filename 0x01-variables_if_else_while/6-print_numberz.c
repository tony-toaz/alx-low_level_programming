#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar('0' + digit);
	}
	putchar('\n');
	return (0);
}

