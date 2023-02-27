#include "main.h"
/**
 * swap_int - swaps the value of numers
 * @a: the first char
 * @b: the second char
 * Return: the swiped value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;
}
