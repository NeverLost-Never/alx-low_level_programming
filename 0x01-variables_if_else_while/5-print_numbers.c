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
	char c;

	c = '0';
	while (c <= '9')
		putchar(c++);
	putchar('\n');
	return (0);
}
