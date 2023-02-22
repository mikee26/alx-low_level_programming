#include <stdio.h>
/**
 * print_to_98 - displaying until 98 hit
 * @i: the character
 * Return: the sequence of numbers
 */
int print_to_98(int i)
{
	if (i < 98)
	{
		while (i <= 98)
		{
			printf("%d", i);
			i++;
			{
				if (i <= 98)
					printf(", ");
			}
		}
	}
	else
	{
		while (i >= 98)
		{
			printf("%d", i);
			i--;
			{
				if (i >= 98)
					printf(", ");
			}
		}
	}
	return (0);
}
