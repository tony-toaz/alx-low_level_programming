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


	printf("Size of a char: %c byte(s)\n", sizeof(my_char));
	printf("Size of a int: %d byte(s)\n", sizeof(my_int));
	printf("Size of a long int: %d byte(s)\n", sizeof(my_long_int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(my_long_long_int));
	printf("Size of a float: %f byte(s)\n", sizeof(my_float));
	return (0);
}
