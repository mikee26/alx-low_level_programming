#include "main.h"
/**
 * print_numbers - display form 0 to 9
 *
 * Return: the numbers
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}

