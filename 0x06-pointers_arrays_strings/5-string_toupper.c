#include "main.h"
/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase
 * @str: a string input
 * Return: a string with lowecases changed to uppercases
 */
char *string_toupper(char *str)
{
	char *upped = str;

	while (*upped)
	{
		if (*upped >= 'a' && *upped <= 'z')
			*upped = *upped - 32;
		upped++;
	}
	return (str);
}
