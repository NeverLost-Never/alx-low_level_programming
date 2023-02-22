#include <stdio.h>
/**
 * main - Entry point
 * Return: alwasy 0 (success)
 */
int main(void)
{
	long i = 1;
	long j = 1;
	long z = i;
	int totalSum = 0;

	while (z < 4000000)
	{
		if (z % 2 == 0)
			totalSum += z;
		z = i + j;
		i = j;
		j = z;
	}
	printf("%d\n", totalSum);
	return (0);
}
