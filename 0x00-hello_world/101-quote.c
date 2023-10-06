#include <unistd.h>
/*
 * main- writes text to standard error
 *
 * Return: 1 on success
 *
 */

int main(void)
{
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, text, 59);
	return (1);
}

