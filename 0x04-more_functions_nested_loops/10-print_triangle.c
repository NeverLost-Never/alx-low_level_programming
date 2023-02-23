#include "main.h"
/**
 * print_triangle - a function that prints a triangle, followed by a new line
 * @size: number input
 * Return: always 0 (success)
 */
void print_triangle(int size)
{
	int i = 0;
	int j;

	if (size > 0)
	{
		while (i < size)
		{
			j = 0;
			while (j < (size - (i + 1)))
			{
				_putchar(' ');
				j++;
			}
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			if (i < size - 1)
				_putchar('\n');
			i++;
		}
	}
	_putchar('\n');
}
