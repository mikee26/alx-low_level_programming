#include <stdio.h>

/**
 * main - give alphabets except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 97; l < 123; l++)
	{
		if (l == 101 || l == 113)
			continue;
		else
			putchar(l);
	}
	return (0);
}

