#include "main.h"
/**
 * print_alphabet_x10 - printing 10x the alpha bet
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void);
{
	char l;
	int i;

	i = 0;

	while (i < 10)
	{
		l = 97;
		while (l < 123)
		{
			putchar(l);
			l++;
		}
		putchar('\n');
		i++;
	}
}
