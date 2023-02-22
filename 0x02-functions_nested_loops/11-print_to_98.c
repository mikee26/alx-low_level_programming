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
		for ( ; i < 99; i++)
		{
			printf("%d ,", i);
		}
	}
	else
	{
		for ( ; i >= 98; i--)
		{
			printf("%d ,", i);
		}
	}
	return (0);
}
