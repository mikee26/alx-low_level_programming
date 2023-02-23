#include "main.h"
/**
 * _isupper - prints upper case letters
 * @c: the character
 * Return: 1 if it is upper case or 0 if not
 */
int _isupper(int c)
{

	if (c >= 65 && c < 91)
		return (1);
	else
		return (0);
}
