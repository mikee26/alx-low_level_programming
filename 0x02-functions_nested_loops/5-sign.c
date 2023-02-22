#include "main.h"
/**
 *  print_sign - printing sign of value
 *  @c: the character
 *  Return: 1 if n greater than zero, -1 if less, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
