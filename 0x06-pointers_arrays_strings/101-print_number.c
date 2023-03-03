#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: a number input
 * Return: always 0 (success)
 */
void print_number(int n)
{
	if (n == -2147483648)
	{
		n = 147483648;
		_putchar('-');
		_putchar('2');
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n > 9)
		print_number(n / 10);
	_putchar('0' + (n % 10));
}
