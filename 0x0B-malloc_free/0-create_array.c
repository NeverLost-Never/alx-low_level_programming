#include "main.h"
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: an unsigned number input
 * @c: a character input
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(char));
	if (!str)
		return (NULL);
	while (i < size)
		str[i++] = c;
	return (str);
}
