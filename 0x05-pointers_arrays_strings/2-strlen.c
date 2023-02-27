#include "main.h"
/**
 * _strlen - prints the size of the character
 * @s: the variable
 * Return: the size of the variable
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
