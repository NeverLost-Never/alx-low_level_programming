#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line
 * @size: number input
 * Return: always 0 (success)
 */
void print_square(int size)
{
	int j = 0;
	int i;

	if (size > 0)
	{
		while (j < size)
		{
			i = 0;
			while (i < size)
			{
				_putchar('#');
				i++;
			}
			if (j < size - 1)
				_putchar('\n');
			j++;
		}
	}
	_putchar('\n');
}
