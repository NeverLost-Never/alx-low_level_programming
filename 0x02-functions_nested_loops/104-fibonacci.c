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
	int n = 0;

	while (n < 98)
	{
		printf("%ld", z);
		z = i + j;
		i = j;
		j = z;
		n++;
		if (z <= 420196140727489673)
			printf(", ");
		else
			break;
	}
	printf("\n");
	return (0);
}
