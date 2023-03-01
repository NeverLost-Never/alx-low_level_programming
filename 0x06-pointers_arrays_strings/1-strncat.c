#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: a string input
 * @src: a string input
 * @n: a number input
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;

	while (*tmp)
		tmp++;
	while (*src && n > 0)
	{
		*tmp = *src;
		tmp++;
		src++;
		n--;
	}
	*tmp = '\0';
	return (dest);
}
