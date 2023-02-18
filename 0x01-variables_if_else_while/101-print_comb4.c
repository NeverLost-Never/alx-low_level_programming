#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints alphabets in lowercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int k;
	int j;

	c = 0;
	while (c <= 7)
	{
		k = c + 1;
		while (k <= 8)
		{
			j = k + 1;
			while (j <= 9)
			{
				putchar('0' + c);
				putchar('0' + k);
				putchar('0' + j);
				if (c != 7)
				{
					putchar(',');
					putchar(' ');
				}
				j++;
			}
			k++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
