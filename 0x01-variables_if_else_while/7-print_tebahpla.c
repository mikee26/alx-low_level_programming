#include <stdio.h>

/**
 * main - reversing the alphabets in lower case
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 122; n > 96; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
