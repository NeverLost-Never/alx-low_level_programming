#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'prints alphabets 10 times'
 *
 * Return
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
			_putchar(c++);
		_putchar('\n');
		i++;
	}
}
