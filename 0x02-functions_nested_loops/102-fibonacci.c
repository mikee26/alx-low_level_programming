#include <stdio.h>
/**
 * main - print fibonacci
 *
 * Return: the series
 */
int main(void)
{
	int i, t1 = 1, t2 = 2, nextTerm;

	for (i = 1; i <= 50; ++i)
	{
		printf("%d, ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("\n");
	return (0);
}
