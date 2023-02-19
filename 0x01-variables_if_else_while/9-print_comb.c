#include <stdio.h>

/**
 * main - printing every possible ouput
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 28; n < 38; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
