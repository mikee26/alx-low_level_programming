#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - displaying until 98 hit
 * @i: the character
 * Return: the sequence of numbers
 */
int print_to_98(int i)
{
	for ( ; i < 99; i++)
		printf("%d", i);
	_putchar(',');
	return (0);
}
