#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 0;
	int totalSum = 0;

	while (n < 1024)
	{
		if (n % 15 == n)
		{
			if (n % 3 == 0 || n % 5 == 0)
				totalSum += n;
		}
		if (n % 15 == 0)
			totalSum += n;
		n++;
	}
	printf("%d\n", totalSum);
	return (0);
}
