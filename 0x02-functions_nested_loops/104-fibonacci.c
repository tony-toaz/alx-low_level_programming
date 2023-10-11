#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned int fib1 = 1;
	unsigned int fib2 = 2;
	unsigned int sum;

	printf("%u, %u", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
		sum = fib1 + fib2;
		printf(", %u", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	printf("\n");
	return (0);
}
