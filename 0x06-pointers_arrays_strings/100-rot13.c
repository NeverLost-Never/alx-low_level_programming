#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 * @str: a string input
 * Return: an encodes string using rot13
 */
char *rot13(char *str)
{
	char *t = str;

	while (*t)
	{
		while ((*t >= 'a' && *t <= 'z') || (*t >= 'A' && *t <= 'Z'))
		{
			if (*t <= 'Z')
			{
				*t = ((*t - 65 + 13) % 26) + 65;
				break;
			}
			*t = ((*t - 97 + 13) % 26) + 97;
			break;
		}
		t++;
	}
	return (str);
}
