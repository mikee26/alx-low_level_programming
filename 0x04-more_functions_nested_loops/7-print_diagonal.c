#include "main.h"
/**
 * main - prints diagonal line
 *
 * Return: diogonal line
 */
int main(void)
{
	int i, j;

	for (i = 1; j <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar('\');
		}
		_putchar('\n');
	}
	_putchar('\n');
	return (0);
}
