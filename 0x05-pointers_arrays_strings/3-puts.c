#include "main.h"
/**
 * _puts - a function that provides similiar
 * functionalities to puts
 * @str: a string input
 * Return: always 0 (success)
 */
void _puts(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
	write(1, "\n", 1);
}
