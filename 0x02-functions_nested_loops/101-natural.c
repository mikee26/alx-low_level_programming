#include <stdio.h>
/**
 * main - computes multple of 5 and 3 and print sum
 *
 * Retur: sum of multiples
 */
int main(void)
{
	int s = 0, n;

	for (n = 0; n < 1024; n++)
	{
		if (n % 5 || n % 3 == 0)
		{
			s += n;
		}
	}
	printf("%d\n", s);
	return (0);
}

