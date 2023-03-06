#include "main.h"
/**
 * _strspn - a function that gets the length of a
 * prefix substring
 * @s: a string input
 * @accept: a string input
 * Return: the length of the prefix found in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int i = 0;
	int j = 0;

	while (s[i])
	{
		if (count != i)
			break;
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
			j++;
		}
		i++;
	}
	return (count);
}
