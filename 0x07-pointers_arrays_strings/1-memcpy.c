#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: a string input
 * @src: a string input
 * @n: an unsigned number input
 * Return: a copied string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
