#include "main.h"
/**
 * _isdigit - prints digit
 * @c: the var
 * Return: 1 if digit other wise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
