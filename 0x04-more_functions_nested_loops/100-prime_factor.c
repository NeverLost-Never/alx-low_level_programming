#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			n /= i;
	}
	printf("%ld\n", i);
	return (0);
}
