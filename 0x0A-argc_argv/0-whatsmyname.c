#include "main.h"
/**
 * main - main function, prints the name of the program
 * @argc: parameter 1 argument count
 * @argv: parameter 2 argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	(void) argc;

	for (i = 0; argv[0][i] != '\0'; i++)
	{
	_putchar(argv[0][i]);
	}

	_putchar('\n');

	return (0);
}
