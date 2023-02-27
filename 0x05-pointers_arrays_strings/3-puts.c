#include "main.h"
/**
 * _puts - prints strings to the stdout
 * @str: the character
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
