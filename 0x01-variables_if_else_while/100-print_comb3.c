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
	while (c <= 8)
	{
		k = c + 1;
		while (k <= 9)
		{
			putchar('0' + c);
			putchar('0' + k);
			if (c != 8)
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
