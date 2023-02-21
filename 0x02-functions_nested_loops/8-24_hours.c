#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int hr = 0;
	int min;

	while (hr < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar('0' + (hr / 10));
			_putchar('0' + (hr % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		hr++;
	}
}
