#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: a string input
 * @c: a character input
 * Return: a subset of the string starting from the character c
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int len = 0;

	if (s == NULL)
		return (NULL);
	while (s[len])
		len++;
	len++;
	while (i < len)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
