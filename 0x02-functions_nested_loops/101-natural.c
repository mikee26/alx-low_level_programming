#include <stdio.h>
/**
 * main - computes multple of 5 and 3 and print sum
 *
 * Return: sum of multiples
 */
int main(void)
{
	int sum = 0, num;

	for (num = 0; num < 1024; num++)
	{
		if (num % 5 == 0 || num % 3 == 0)
		{
			sum += num;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
