#include "main.h"
/**
 * main - main function
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int argCount;
	(void)argv;

	argCount = argc - 1;
	_putchar(argCount + '0');
	_putchar('\n');
	return (0);
}
