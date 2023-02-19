#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - printing a text
 *
 * Return: 1 (success)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19", stdout);
	fputs("\n");
	return (1);
}
