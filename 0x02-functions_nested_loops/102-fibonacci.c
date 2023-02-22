#include <stdio.h>
/**
 * main - print fibonacci
 *
 * Return: the series
 */
int main(void)
{
	int i, t1 = 0, t2 = 1, nextTerm;

	for (i = 1; i <= n; ++i)
	{
		printf("%d, ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	return (0);
}
