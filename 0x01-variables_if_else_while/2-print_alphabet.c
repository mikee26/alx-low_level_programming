#include <stdio.h>

/**
 * main - writing lower case letters
 *
 * Return: 0 (success)
 */
int main(void)
{
	char l;

	for (l = 97; l < 123; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
