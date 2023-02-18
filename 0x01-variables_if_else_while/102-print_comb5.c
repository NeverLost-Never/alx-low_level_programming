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

	c = 0;
	while (c <= 98)
	{
		k = c + 1;
		while (k <= 99)
		{
			putchar('0' + (c / 10));
			putchar('0' + (c % 10));
			putchar(' ');
			putchar('0' + (k / 10));
			putchar('0' + (k % 10));
			if (c != 98)
			{
				putchar(',');
				putchar(' ');
			}
			k++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
