#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: number input
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar('0' + (n % 10));
	return (n % 10);
}
