#include <stdio.h>

/**
 * main - main function
 * Return: 0 on success
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i; j <= 99; j++)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));

			putchar(' ');

			putchar('0' + (j / 10));
			putchar('0' + (j % 10));

			if (i != 98 || j != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}

	putchar('\n');
	return (0);
}
