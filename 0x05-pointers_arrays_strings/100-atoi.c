#include "main.h"
/**
 * _atoi - a function that converts a string to an integer
 * @s: a string input
 * Return: converted integer
 */
int _atoi(char *s)
{
	int digit = 0;
	int i = 0;
	int sign = 1;

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (digit == 214748364 && s[i] == '8' && sign == -1)
			return (-2147483648);
		digit = digit * 10 + (s[i++] - '0');
	}
	return (digit * sign);
}
