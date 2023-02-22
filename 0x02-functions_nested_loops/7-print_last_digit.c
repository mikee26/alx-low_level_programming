#include "main.h"
/**
 * print_last_digit - prints the last digit as the name
 * @i: the letter
 * Return: the last digit 0
 */
int print_last_digit(int i)
{

	int r = i % 10;

	if (r < 0)
		r *= -1;

	_putchar(r + '8');

	return (0);
}
