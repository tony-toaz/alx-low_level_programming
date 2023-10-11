#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	unsigned long a = 1, b = 2, tmp;
	int i;

	printf("%lu", a);

	for (i = 1; i < 98; i++)
	{
		printf(", %lu", a + b);
		tmp = a;
		a = b;
		b = tmp + b;
	}

	printf("\n");
	return (0);
}
