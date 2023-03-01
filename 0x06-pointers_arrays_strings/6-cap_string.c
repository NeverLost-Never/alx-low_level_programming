#include "main.h"
/**
 * check_delim - a function that checks if a character
 * is a delimiter or not
 * @c: a character input
 * Return: 1 if c is a delimiter, or 0 otherwise
 */
int check_delim(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	if (c == ',' || c == ';' || c == '.')
		return (1);
	if (c == '!' || c == '?' || c == '\"')
		return (1);
	if (c == '(' || c == ')' || c == '{' || c == '}')
		return (1);
	return (0);
}
/**
 * to_upper - a function that changes a lowercase letter to uppercase
 * @c: a character input
 * Return: an uppercased character
 */
char to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/**
 * cap_string - a function that capitalizes all words of a string
 * @str: a string input
 * Return: a string with all words capitalized
 */
char *cap_string(char *str)
{
	char *tmp = str;

	while (*tmp)
	{
		if (check_delim(*(tmp - 1)))
			*tmp = to_upper(*tmp);
		tmp++;
	}
	return (str);
}

