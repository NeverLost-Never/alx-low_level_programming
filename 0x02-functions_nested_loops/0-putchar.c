#include	"putchar.h"
/**
 * main - Entry point
 *
 * Description: 'prints _putchar'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}
