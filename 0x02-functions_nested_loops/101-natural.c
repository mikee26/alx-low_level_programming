#include <stdio.h>
/**
 * main - computes multple of 5 and 3 and print sum
 *
 * Retur: sum of multiples
 */
int main(void)
{
	int z = 0;
	int i;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			z += i;
	}
	i++;
	printf("%d\n", z);
	return (0);
}
