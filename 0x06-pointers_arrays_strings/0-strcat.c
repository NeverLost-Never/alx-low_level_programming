#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: a string input
 * @src: a string input
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*tmp)
		tmp++;
	while (*src)
	{
		*tmp = *src;
		tmp++;
		src++;
	}
	*tmp = '\0';
	return (dest);
}
