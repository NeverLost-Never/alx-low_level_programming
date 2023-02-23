#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 * Return: always 0 (success)
 */
void more_numbers(void)
{
	int n = 0;
	int i;

	while (n < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar('1');
			_putchar('0' + (i % 10));
			i++;
		}
		_putchar('\n');
		n++;
	}
}
