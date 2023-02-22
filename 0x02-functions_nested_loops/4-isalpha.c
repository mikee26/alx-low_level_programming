#include "main.h"
/**
 * _isalpha - detect any alpha bets
 * @c: the character
 * Return: 1 if alphabet, otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
