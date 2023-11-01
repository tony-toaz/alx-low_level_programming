#include "main.h"
/**
 * main - main function
 * @argc: parameter 1 argument count
 * @argv: parameter 2 argument array(vector)
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		_putchar(argv[i][j]);
	}
	_putchar('\n');
	}

	return (0);
}

