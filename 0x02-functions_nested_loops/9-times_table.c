#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 * Return: always 0 (success)
 */
void times_table(void)
{
	int i = 0;
	int j;
	int times;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			times = i * j;
			if (times > 9)
				_putchar('0' + (times / 10));
			_putchar('0' + (times % 10));
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (times < 10)
					_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
