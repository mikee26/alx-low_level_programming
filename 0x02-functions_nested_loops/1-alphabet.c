#include "stdio.h"

/**
 * main - to print letters in lower case followed by new line
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
}
