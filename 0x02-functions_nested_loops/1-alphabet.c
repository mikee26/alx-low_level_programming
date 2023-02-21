#include "main.h"
/**
 * main - to print letters in lower case followed by new line
 *
 * Return: 0
 */
void print_alphabet(void);
{
	char l;

	for (l = 97; l < 123; l++)
		_putchar(l);
	putchar('\n');
}
