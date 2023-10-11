#include "main.h"

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int first = 1;
	int second = 2;
	int next;
	int count = 0;

	printf("%d, %d", first, second);
	count += 2;

	while (count < 98)
	{
		next = first + second;
		printf(", %d", next);
		count++;

		first = second;
		second = next;
	}

	printf("\n");
	return (0);
}
