#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long next;
	unsigned long count = 0;

	printf("1, 2");

	while (count < 96)
	{
		next = first + second;
		printf(", %lu", next);
		count++;

		first = second;
		second = next;
	}

	printf("\n");
	return (0);
}
