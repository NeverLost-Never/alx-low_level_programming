#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: number input
 * Return: always 0 (success)
 */
void print_number(int n)
{
	unsigned int j;

	if (n < 0)
	{
		_putchar('-');
		j = -n;
	}
	else
		j = n;
	if (j / 10)
		print_number(j / 10);
	_putchar('0' + (j % 10));
}
