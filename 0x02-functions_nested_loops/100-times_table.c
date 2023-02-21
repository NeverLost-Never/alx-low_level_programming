#include "main.h"
#include <stdio.h>
/**
 * print_times_table - a function that prints nth times table,
 * starting with 0
 * @n: number input
 * Return: always 0 (success)
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		_putchar('\n');
	else
	{
		int i = 0;
		int j;
		int times;

		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				times = i * j;
				if (j != 0 && j <= n)
				{
					_putchar(',');
					_putchar(' ');
					if (times < 100)
						_putchar(' ');
					if (times < 10)
						_putchar(' ');
				}
				if (times > 99)
					_putchar('0' + (times / 100));
				if (times > 9)
					_putchar('0' + ((times % 100) / 10));
				_putchar('0' + (times % 10));
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
