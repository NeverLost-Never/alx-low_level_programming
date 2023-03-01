#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: a string input
 * @src: a string input
 * @n: a number input
 * Return: copies a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *tmp = dest;

	while (*src && n > 0)
	{
		*tmp = *src;
		tmp++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*tmp = '\0';
		tmp++;
		n--;
	}
	return (dest);
}
