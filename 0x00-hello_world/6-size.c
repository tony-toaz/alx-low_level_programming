#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 *
 */

int main(void)
{

	char my_char;
	int my_int;
	long int my_long_int;
	long long int my_long_long_int;
	float my_float;


	printf("Size of a char: %u byte(s)\n", sizeof(my_char));
	printf("Size of an int: %u byte(s)\n", sizeof(my_int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(my_long_int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(my_long_long_int));
	printf("Size of a float: %u byte(s)\n", sizeof(my_float));
	return (0);
}
