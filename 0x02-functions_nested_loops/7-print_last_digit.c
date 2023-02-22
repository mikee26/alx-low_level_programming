#include "main.h"
/**
 * print_last_digit - printing last digit
 * @i: the number
 * Return: the last digits
 */
int print_last_digit(int i)
{
	int l;
	
	l = i % 10;
	{
	if (l < 0)
		l = l * -1;
	}
	_putchar(l + '0');
	return(l);
}
