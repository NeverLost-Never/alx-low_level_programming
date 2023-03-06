#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: an array of integers input
 * @size: size of the square
 * Return: always 0 (success)
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int k = 0;
	int sum_1 = 0;
	int sum_2 = 0;

	while (k < size * size)
	{
		if (k == i)
		{
			sum_1 += a[k];
			i += size + 1;
		}
		if (k == j)
		{
			sum_2 += a[k];
			if ((j + size - 1) < (size * size - 1))
				j += size - 1;
		}
		k++;
	}
	printf("%d, %d\n", sum_1, sum_2);
}
