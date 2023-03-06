#include "main.h"
/**
 * _strpbrk - a function that searches for any of a set of bytes
 * @s: a string input
 * @accept: a string input
 * Return: a pointer to the btye in s that matches one of the btes
 * in accept, or aNULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (accept[i] == *s)
				return (s);
			i++;
		}
		s++;
	}
	return (NULL);
}
