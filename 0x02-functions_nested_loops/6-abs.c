#include "main.h"
/**
 * _abs - a functions that returns the absolute of a number
 * @n: number input
 * Return: the absolute of the number
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
