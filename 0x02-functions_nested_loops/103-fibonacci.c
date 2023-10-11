#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, next;
	unsigned long limit = 4000000;
	unsigned long sum = 0;

	while (fib2 <= limit)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}

	printf("%lu\n", sum);
	return (0);
}
