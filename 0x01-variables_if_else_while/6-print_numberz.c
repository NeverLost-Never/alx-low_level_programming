#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints digits of base 10 in order'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar('0' + n++);
	}
	putchar('\n');
	return (0);
}
