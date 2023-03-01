#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: a string input
 * @s2: a string input
 * Return: the difference in ascii between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
