#include "main.h"
/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory, which contains
 * a copy of the string given as a parameter
 * @str: a string input
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *cpy;
	int len;

	if (!str)
		return (NULL);
	len = 0;
	while (str[len])
		len++;
	cpy = malloc((len + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	len = 0;
	while (str[len])
	{
		cpy[len] = str[len];
		len++;
	}
	cpy[len] = '\0';
	return (cpy);
}
