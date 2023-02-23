#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal
 * @n: number input
 * Return: always 0 (success)
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
