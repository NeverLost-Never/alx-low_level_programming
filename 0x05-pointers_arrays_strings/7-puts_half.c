#include "main.h"
/**
 * puts_half - a function that prints half of a string,
 * followed by a new line
 * @str: a string input
 * Return: always 0 (success)
 */
void puts_half(char *str)
{
	int len = 0;
	int half_len;

	while (str[len])
		len++;
	if (len % 2 == 0)
		half_len = len / 2;
	else
		half_len = (len + 1) / 2;
	while (half_len < len)
		_putchar(str[half_len++]);
	_putchar('\n');
}

