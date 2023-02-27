#include "main.h"
/**
 * print_rev - a function that prints a string in reverse order
 * @s: a string input
 * Return: always 0 (success)
 */
#include <stdio.h>
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	len--;
	while (len >= 0)
		_putchar(s[len--]);
	_putchar('\n');
}
