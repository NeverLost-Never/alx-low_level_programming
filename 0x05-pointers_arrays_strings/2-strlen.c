#include "main.h"
/**
 * _strlen - a function that provides a similiar
 * functionality to strlen
 * @s: a string input
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
