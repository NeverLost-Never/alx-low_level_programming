#include "main.h"
/**
* swap_int - a function that swaps the value of two integers
* @a: a pointer to an integer input
* @b: a pointer to an integer input
* Return: always 0 (success)
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
