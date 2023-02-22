#include "main.h"
/**
 * print_alphabet_x10 - printing 10x the alpha bet
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char l;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (l = 97; l < 123; l++)
			_putchar(l);
	_putchar('\n');
	}
}
