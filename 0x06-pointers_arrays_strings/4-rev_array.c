#include "main.h"
/**
 * reverse_array - a function that reverses the content of
 * an array of integers
 * @a: an array of integers
 * @n: the size of the array
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i = 0;
	int j = n - 1;

	while (i <= j)
	{
		tmp = a[i];
		a[i++] = a[j];
		a[j--] = tmp;
	}
}
