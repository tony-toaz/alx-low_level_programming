#include <stdio.h>
/**
 * main -main function
 * Return: 0
 */

int main(void)
{
	long prime = 612852475143, the_factor = 2;


	while (the_factor < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (the_factor = 3; the_factor < (prime / 2); the_factor += 2)
		{
			if ((prime % the_factor) == 0)
				prime /= the_factor;
		}
	}

	printf("%ld\n", prime);
	return (0);
}

