#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: a string input
 * Return: always 0 (success)
 */
void rev_string(char *s)
{
	char i;
	int len = 0;
	int j = 0;

	while (s[len])
		len++;
	len--;
	while (j <= len)
	{
		i = s[j];
		s[j++] = s[len];
		s[len--] = i;
	}
}
