#include <stdio.h>

/**
 * main - displaying lower and upper case
 *
 * Return: 0 (success)
 */
int main(void)
{
	char l;

	for (l = 97; l < 123; l++)
		putchar(l);

	for (l = 65; l < 91; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
