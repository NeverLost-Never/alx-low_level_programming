#include "main.h"
/**
 * leet - a function that encodes a string to 1337
 * @str: a string input
 * Return: encoded string
 */
char *leet(char *str)
{
	char *tmp = str;
	char *enc = "ol\0ea\0\0t";
	int i;

	while (*tmp)
	{
		for (i = 0; i < 8; i++)
		{
			if (enc[i] == *tmp || (enc[i] - 32) == *tmp)
			{
				*tmp = '0' + i;
				break;
			}
		}
		tmp++;
	}
	return (str);
}
