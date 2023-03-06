#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: a string input
 * @needle: a string input
 * Return: a pointer to the beginning of the located substring, or
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (haystack[i])
	{
		j = 0;
		while (needle[j] && needle[j] == haystack[i + j]
			&& haystack[i + j])
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return (NULL);
}
