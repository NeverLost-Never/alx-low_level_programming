#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: number input
 * Return: always 0 (success)
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		while (n > 0)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			if (n != 1)
				_putchar('\n');
			i++;
			n--;
		}
	}
	_putchar('\n');
}
