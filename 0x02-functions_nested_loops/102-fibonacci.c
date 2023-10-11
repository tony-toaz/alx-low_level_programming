#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long sum;

	for (count = 0; count < 50; count++)
	{
		printf("%lu", fib1);

		if (count < 49)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
	}
	return (0);
}
