#include "main.h"
/**
 * _memset - a function that fills memory with constant byte
 * @s: a string input
 * @b: a character input
 * @n: an unsigned number input
 * Return: a string filled with constant byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;
	return (s);
}
