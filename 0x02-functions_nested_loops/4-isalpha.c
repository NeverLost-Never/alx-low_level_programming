#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: character input
 * Description: 'checks for alphabetic chararacter'
 * Return: 1 if c is an alphabet (lower or upper) or 0 otehrwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
