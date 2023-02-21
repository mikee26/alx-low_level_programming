#include "stdio.h"

/**
 * print_alphabet - to print letters in lower case followed by new line
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char l;

	for (l = 97; l < 123; l++)
		putchar(l);
	putchar('\n');
}
