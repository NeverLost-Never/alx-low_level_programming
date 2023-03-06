#include "main.h"
/**
 * set_string - a function taht sets the value of a pointer to a char
 * @s: a pointer to a string input
 * @to: a string input
 * Return: always 0 (success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
