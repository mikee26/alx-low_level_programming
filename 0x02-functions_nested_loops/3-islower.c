#include "main.h"
/**
 * _islower - detects lower case letters
 * @c: the character
 * Return: 1 if c is lower case, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
